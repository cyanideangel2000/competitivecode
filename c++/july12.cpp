#include <iostream>
#include <string>
#include <vector>

using namespace std;
vector<string> str;
string eat;

bool iswordmade (string state, unsigned int pos, unsigned int count)
{
    bool flag;

    // Terminating condition
    if (pos == str.size()) {
        if (count == eat.length()) {
            return true;
        } else return false;
    }

    cout << "CurState: " << state << " Str: " << str[pos] << " Cnt: " << count << endl;
    int i, j, count1 = count;
    string str1 = str[pos];
    string state1 = state;
    for (i=0; i<str1.length(); i++)
    {
        j = state1.find(str1[i]);
        if (j != string::npos) {
            state1[j] = '1';
            count1++;
        } else break;
    }

    if (i == str1.length()) {
        if (count1 == eat.length()) {
            cout << "Final: " << state1 << endl;
            return true;
        }

        flag = iswordmade(state1, pos+1, count1);
    } else {
        flag = iswordmade(state, pos+1, count);
    }

    if (flag) return flag;
    else if (count == count1) return false;
    else return iswordmade(state, pos+1, count);
}

int main(void)
{
    unsigned int testcase, n, i, j, a, b, l;
    cin >> testcase;
    string str1;
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
        cout << (iswordmade(eat, 0, 0) ? "YES" : "NO") << endl;
        str.clear();
    }
    return 0;
}

