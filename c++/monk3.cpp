#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int testcase, n, i, min, count;
    string rawInput;

    // read the number of process
    cin >> testcase;

    while (testcase--)
    {
        // read the given order of process
        min = 999999999;
        count = 0;

        cin >> n;
        //cout << "N: " << n << endl;
        while (--n)
        {
            getline(cin, rawInput, ' ');
            i = atoi(rawInput.c_str());

            if (i < min) {
                min = i;
                count = 1;
            } else if (i == min) count++;
            else continue;
        }

        cin >> i;
        if (i < min) {
            min = i;
            count = 1;
        } else if (i == min) count++;

        // print the result
        if (count % 2) cout << "Lucky" << endl;
        else cout << "Unlucky" << endl;
    }
}

