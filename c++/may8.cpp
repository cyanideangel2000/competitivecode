#include <iostream>
#include <stack>

using namespace std;

struct state {
    unsigned long long int num;
    unsigned int len;
    unsigned short digit;
};

stack<state> stk;
int main(void)
{
    unsigned long long int n, i, j, k;
    unsigned long long int count = 0, mod = (1 << 32), len = 1;
    unsigned int digit = 1;
    state st1, st2, st3;

    cin >> n;

    if (n == 1) {
        cout << 9 << endl;
        return 0;
    } /*else if (n == 2) {
        cout << 41 << endl;
        return 0;
    }*/
    st1.num = 1;
    st1.len = 1;
    st1.digit = 1;
    stk.push(st1);

    while (!stk.empty())
    {

        st1 = stk.top();
        cout << "Stk Top: num: " << st1.num << " Digit: " << st1.digit
        << " Len: " << st1.len << endl;

        if (st1.num == 9 && st1.digit > 9) break;
        else if (st1.digit > 9) {
            stk.pop();
            if (!stk.empty()) {
                st1 = stk.top();
                st1.num++;
                st1.digit++;
                stk.pop();
                stk.push(st1);
            }
        } else if (st1.len == (n - 1)) {
            // Next number will be of needed digits
            // So, we run things here itself
            for (i = 1; i<10; i++)
            {
                j = 10 * st1.num  + i;
                if (j % i == 0) {count++; cout << "Num: " << j << " Digit: " << i << " Count: " << count << endl;}
            }
            st1.num++;
            st1.digit++;
            stk.pop();
            stk.push(st1);
        } else if (st1.len < n) {
            st2 = st1;
            st2.num = st1.num * 10 + st1.digit;
            st2.len++;
            stk.push(st2);
        }
    }
    cout << count << endl;
}
