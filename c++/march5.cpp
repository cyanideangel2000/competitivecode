#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
    int i, j ,k, n, testcase;
    int strow, endrow, stcol, endcol;
    bool flag;
    cin >> testcase;
    while(testcase--)
    {
        cin >> n;
        vector<string> matrix(n);
        for (i=0; i<n; i++)
            cin >> matrix[i];
        strow = stcol = 0;
        endrow = endcol = n-1;

        flag = true;
        while(strow < endrow)
        {
            if (matrix[strow] == matrix[endrow]) {
                strow++;
                endrow--;
            } else {flag = false; break;}

            // Current row(strow) matches with last row(endrow)
            // Interim, lets check for columns too, only if row matches
            // If row match fails, we don't reach here
            const char *str = matrix[strow-1].c_str();
            for (i=0;i<n; i++)
            {
                if (str[i] == str[n-1-i]) continue;
                else {flag = false; break;}
            }
            if (false == flag) break;

            // Check the endrow
            str = matrix[endrow-1].c_str();
            for (i=0;i<n; i++)
            {
                if (str[i] == str[n-1-i]) continue;
                else {flag = false; break;}
            }
            if (false == flag) break;
        }

        if (false == flag) {
            cout << "NO" << endl;
            continue;
        } cout << "YES" << endl;
    }
}
