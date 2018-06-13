#include <iostream>
#include <vector>

using namespace std;


int main(void)
{
    unsigned long testcase, n, p, i, j, max, k;
    string rawInput;

    // read the num testcase
    cin >> testcase;
    cin.ignore();
    while (testcase)
    {
        getline(cin, rawInput, ' ');
        n = atol(rawInput.c_str());

        cin >> p;

        j = 0;
        // if n and p are equal
        if (n == p) {
            cout << 0 << endl;
            testcase--;
            continue;
        }

        // If n and p aren't equal
        if (n > p) max = n;
        else max = p;

        for (i=0; i < (sizeof(unsigned long) * 8); i++)
        {
            k = 1 << i;
            if (k > max) break;
            else {
                if ((k & n) != (k & p)) j++;
                cout << "k: " << k << " i: " << i << " k & n: " << (k & n) << " p & n: " << (p & k) << " J: " << j << endl;
            }
        }
        cout << j << endl;
        testcase--;
    }
}
