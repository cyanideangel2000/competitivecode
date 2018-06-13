#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string s1;
    char c;
    int testcase, i, j;

    cin >> testcase;
    cin.ignore();
    while (testcase)
    {
        cin >> s1;
        c = s1[0];

        for (i=0; i<s1.length(); i++)
        {
            if (c == s1[i]) continue;
            else {
                cout << c;
                c = s1[i];
            }
        }
        cout << c << endl;
        testcase--;
    }
    return 0;
}
