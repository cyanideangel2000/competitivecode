#include <iostream>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

string str;
vector<string> store;
int main()
{
    unsigned int count = 0;
    int length, i, j, x, y;
    char temp[25];

    cin >> str;
    length = str.length();
    x = y = 0;
    j = 0;
    store.reserve(length);
    store.push_back("0 0");
    for (i=0; i<length; i++)
    {
        char c = str[i];
        if (c == 'L') {
            y--;
        } else if (c == 'R') {
            y++;
        } else if (c == 'U') {
            x--;
        } else if (c =='D') {
            x++;
        }
        memset(temp, 0x0, sizeof(temp));
        sprintf(temp, "%d %d", x, y);
        //cout << "At: ( " << x << ", " << y << " )"
        //     << " inString: " << temp << endl;
        store.push_back(string(temp));
    }
    sort(store.begin(), store.end());
    string str1 = store[0];
    for (i=1; i< store.size(); i++)
    {
        if (str1 == store[i]) count++;
        else str1 = store[i];
        
    }
    cout << count << endl;
}
