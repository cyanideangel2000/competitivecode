#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int testcase, n, x, i, j, t;
    string rawInput;
    vector<int> cost;

    cost.reserve(1000000);
    cin >> testcase;
    cin.ignore();
    while (testcase)
    {
        getline(cin, rawInput, ' ');
        n = atoi(rawInput.c_str());
        cin >> x;
        for (i=0; i<n; i++)
        {
            cin >> j;
            cost.push_back(j);
        }

        // lets try to solve it
        j = t = 0;
        for (i=0; i<n; i++)
        {
            if (j < x) {
                j = j + cost[i];
                cout << "I: " << i << " Cost: " << cost[i] << " J: " << j << endl;
                continue;
            }
            i--;
            cout << "J1: " << j << " I: " << i << endl;
            if (j == x) {cout << "YES" << endl; break;}
            while (j>x)
            {
                j = j - cost[t++];
            }
            cout << "J2: " << j << " T: " << t << endl;
        }
        if (i == n) cout << "NO" << endl;
        testcase--;
    }
    return 0;
}
