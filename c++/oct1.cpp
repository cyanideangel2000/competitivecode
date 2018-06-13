#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int testcase, n, j, i, v[12];
    int gold, silver, bronze;
    int mingold, minsilver, minbronze;
    string rawInput;

    // read the num testcase
    cin >> testcase;
    cin.ignore();
    while (testcase)
    {
        cin >> n;

        mingold = minsilver = minbronze = 0;
        j = n;
        while (j)
        {
            getline(cin, rawInput, ' ');
            gold = atoi(rawInput.c_str());
            mingold += gold;

            getline(cin, rawInput, ' ');
            silver = atoi(rawInput.c_str());
            minsilver += silver;

            cin >> bronze;
            minbronze += bronze;
            j--;
        }

        if ((mingold > minsilver) && (mingold > minbronze))
            cout << mingold;
        else if ((minsilver > mingold) && (minsilver > minbronze))
            cout << minsilver;
        else if ((minbronze > mingold) && (minbronze > minsilver))
            cout << minbronze;
        cout << endl;
        testcase--;
    }
}
