#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    unsigned int testcase, n, i, j, a, b, l;
    cin >> testcase;
    vector<string> str;
    string str1, eat, eat1, eat2;
    size_t pos;
    bool flag;
    
    while(testcase--)
    {
        cin >> n;
        str.reserve(n);
        i = n;
        while(i--)
        {
            cin >> str1;
            str.push_back(str1);
        }
        cin >> eat;
        cout << "Dragon Sleeping at: " << eat << endl;

        // We have read all the strings.
        i = 0;
        l = 0;
        flag = false;
        while (!flag && l < str.size())
        {
            flag = false;
            eat1 = eat;
            a = b = 0;
            i = 0;
            do
            {
                str1 = str[i];
                eat2 = eat1;
                b = a;
                cout << "Trying string: " << str1 << " atIndex: " << i << endl;
                cout << "CurrentState: " << eat1 << endl;
                for (j=0; j<str1.length(); j++)
                {
                    pos = eat.find(str1[j]);

                    // This substring has a character which isn't there
                    // in Dragon string, so delete this string
                    if (pos == string::npos) {
                        cout << "Deleting String: " << str1 << endl;
                        str.erase(str.begin() + i);
                        i = -1;
                        eat1 = eat;
                        a = 0;
                        break;
                    }

                    pos = eat1.find(str1[j]);
                    if (pos != string::npos) {
                        eat1[pos] = '1';
                        a++;
                    } else {
                        eat1 = eat2;
                        a = b;
                        cout << "Did not work: " << str1 << endl;
                        break;
                    }
                }
                if (j == str1.length() && a == eat.length()) flag = true;
                i++;
            } while (!flag && (i < str.size()));
            l++;
        }
        cout << (flag ? "YES" : "NO" ) << endl;
    }
    return 0;
}
