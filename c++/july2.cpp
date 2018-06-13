#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int testcase, n, m, sum1 = 0, sum2 = 0;
    vector<int> even, odd;
    string rawInput;
    even.reserve(1000);
    odd.reserve(1000);

    cin >> testcase;
    cin.ignore();
    while (testcase)
    {
        cin >> n;
        while (n > 1)
        {
            getline(cin, rawInput, ' ');
            m = atoi(rawInput.c_str());
            if (m & 1) odd.push_back(m);
            else even.push_back(m);
            n--;
        }
        cin >> m;
        cin.ignore();
        if (m & 1) odd.push_back(m);
        else even.push_back(m);

        // solve for even
        for (m=0; m < even.size(); m++)
        {
            for (n=m+1; n < even.size(); n++)
            {
                if (even[m] != even[n]) sum1++;
            }
        }

        // solve for odd
        for (m=0; m < odd.size(); m++)
        {
            for (n=m+1; n < odd.size(); n++)
            {
                if (odd[m] != odd[n]) sum1++;
            }
        }
        cout << sum1 << endl;
        even.clear();
        odd.clear();
        sum1 = 0;
        testcase--;
    }
    return 0;
}
