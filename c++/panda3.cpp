#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stack>
using namespace std;

int main (void)
{
    unsigned long testcase, n, m, i, temp, temp1;
    string rawInput;
    stack<unsigned long> power;

    cin >> testcase;
    cin.ignore();

    while (testcase > 0)
    {
        // read N, the number of the box
        // read X, the initial num of item in box 0
        getline(cin, rawInput, ' ');
        cin >> m;
        n = atol(rawInput.c_str());

        // if base is 1, then answer is n
        if (m == 1) {
            cout << n << endl;
            testcase--;
            continue;
        }

        i = 0;
        for(temp = 1; temp <= n; temp *= m) power.push(temp);
        while (n)
        {
            cout << "N: " << n << " temp: " << temp << endl;
            if (n >= temp) {
                n = n - temp;
                i++;
            } else {
                if (!power.empty()) {
                    temp = power.top();
                    power.pop();

                    if (temp == 1) {
                        i += n;
                        break;
                    }
                }
            }
        }
        cout << i << endl;
        testcase--;
    }
}
