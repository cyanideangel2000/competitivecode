#include <iostream>
#include <string>
#include <stack>

using namespace std;

unsigned int answer = 0;

class number {
    public:
        string str;
        int h1, d1;

        number() 
        {h1 = d1 = 0;}

        number(int h2, int d2) : h1(h2)
                               , d1(d2)
        {}
};

stack <string> store;
void permute (int n, int h, int d)
{
    int h1, d1, i;
    string str, strh, strd;
    store.push("H");
    answer = 0;

    while(!store.empty())
    {
        h1 = d1 = 0;

        // get the top element
        str = store.top();
        store.pop();

        for (i=0; i<str.length(); i++)
        {
            if (str[i] == 'H') h1++;
            else if (str[i] == 'D') d1++;
        }
        // cout << str << " " << h1 << " " << d1 << endl;

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
            store.push(strh);
        }

        if ((strd.length() <= n) && (h1 > (1+d1))) {
            store.push(strd);
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
        permute(n, h, d);
        cout << answer << endl;
    }
}
