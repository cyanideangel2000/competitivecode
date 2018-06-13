#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    unsigned int n;
    unsigned long x, y, z;

    cin >> n;
    stack<unsigned long> maxstk;
    stack<unsigned long> stack;

    while(n--)
    {
        cin >> x;
        if (x == 1) {
            cin >> y;
            stack.push(y);

            if (maxstk.empty()) {
                maxstk.push(y);
            } else {
                if (y >= maxstk.top()) maxstk.push(y);
            }
        } else if (x == 2) {
            if (stack.top() == maxstk.top()) {
                stack.pop();
                maxstk.pop();
            } else stack.pop();
        } else if (x == 3) {
            cout << maxstk.top() << endl;
        }

    }

    return 0;
}

