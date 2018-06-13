#include <iostream>
#include <string>

using namespace std;
#define yellow 1
#define green  2
#define blue   4
#define white  8
#define red    16


int main(void)
{
    int cards[5] = {0, };
    int i, j, k;
    string str;

    cin >> i;
    while (i--)
    {
        cin >> j >> str;
        while (j--)
        {
            cin >> k;
            cout << "Read: " << str << " " << k << endl;
            if (str == "yellow")        cards[k-1] |= yellow;
            else if (str == "green")    cards[k-1] |= green;
            else if (str == "blue")     cards[k-1] |= blue;
            else if (str == "white")    cards[k-1] |= white;
            else if (str == "red")      cards[k-1] |= red;
        }
    }

    for (i=0; i<5; i++)
    {
        j = cards[i];
        if ( j == 0) cout << "UNDEFINED" << endl;
        else if (j != yellow && j != green && j != blue && j != white && j != red)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
