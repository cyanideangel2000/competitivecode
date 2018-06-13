#include <iostream>
#include <string>
#include <stack>

using namespace std;

unsigned int answer = 0;

class number {
    public:
        string str;
        int h1, d1;

        number(string str2, int h2, int d2) 
            : str(str2)
            , h1(h2)
            , d1(d2)
        {}
};

stack <number> store;
void permute (int n, int h, int d)
{
    int h1, d1, i;
    string str, strh, strd;

    store.push(number("H", 1, 0));

    // start the engine
    while(!store.empty())
    {
        h1 = d1 = 0;

        // get the top element
        number num = store.top();
        store.pop();

        // extract the values from num
        str = num.str;
        h1 = num.h1;
        d1 = num.d1;

        cout << str << " " << h1 << " " << d1 << endl;

        // lets see if this is our answer
        if ((str.length() == n) && (h1 == h) && (d1 == d)) {
            answer++;
            cout << "Answer: " << str << " " << answer << endl;
            continue;
        }

        // get the new strings
        strh = str + 'H';
        strd = str + 'D';

        // validate new strings
        // First if length of string is <= n
        // numH's should be more numD's
        if ((strh.length() <= n) && ((h1+1) > d1)) {
            store.push(number(strh, h1 + 1, d1));
        }

        if ((strd.length() <= n) && (h1 > (1+d1))) {
            store.push(number(strd, h1, d1 + 1));
        }
    }
}

int main(void)
{
    int n, h, d, testcase;
    cin >> testcase;

    while(testcase--)
    {
        cin >> n >> h >> d;
        answer = 0;
        permute(n, h, d);
        cout << answer << endl;
    }
}
