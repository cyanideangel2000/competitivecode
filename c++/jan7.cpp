#include <iostream>
#include <string>
#include <stack>

using namespace std;

unsigned int answer = 0;

stack <string> store;
stack <int> store1;

void permute (int n, int h, int d)
{
    int h1, d1, i;
    string str, strh, strd;
    store.push("H");
    store1.push(1); // H
    store1.push(0); // D
    answer = 0;

    while(!store.empty())
    {
        h1 = d1 = 0;

        // get the top element
        str = store.top();
        store.pop();

        // since we push h before d, we pop d before h
        d1 = store1.top(); store1.pop();
        h1 = store1.top(); store1.pop();

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
            store.push(strh);

            store1.push(h1+1);
            store1.push(d1);
        }

        if ((strd.length() <= n) && (h1 > (1+d1))) {
            store.push(strd);

            store1.push(h1);
            store1.push(d1 + 1);
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
