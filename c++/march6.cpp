#include <iostream>
#include <stack>
#include <string>

using namespace std;


int main() {
    int testcase;
    bool flag;
    char ch;

    cin >> testcase;
    while (testcase--)
    {
        stack<char> stk;
        string str;
        cin >> str;
        char *temp = const_cast<char *>(str.c_str());
        ch = temp[0];
        flag = false;
        while (ch)
        {
            cout << "Trying ch: " << ch << " Flag: " << flag << endl;
            switch (ch)
            {
                case '{': cout << "Size1: " << stk.size() << endl;
                case '[': cout << "Size2: " << stk.size() << endl;
                case '(': cout << "Size3: " << stk.size() << endl;
                    stk.push(ch);
                    break;

                case '}':
                    if (stk.empty()) flag = true;
                    else if (stk.top() != '{') {
                        flag = true;
                    } else stk.pop();
                    break;
                case ']':
                    if (stk.empty()) flag = true;
                    else if (stk.top() != '[') {
                        flag = true;
                    } else stk.pop();
                    break;
                case ')':
                    if (stk.empty()) flag = true;
                    else if (stk.top() != '(') {
                        flag = true;
                    } else stk.pop();
                    break;
            }
            if (flag) break;
            temp++;
            ch = temp[0];
        }
        if (!flag) cout << "YES" << endl;
        else cout << "NO" << endl;
        while(!stk.empty()) stk.pop();
    }
    return 0;
}

