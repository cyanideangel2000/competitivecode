#include <iostream>

using namespace std;
bool store[1000][1000];

int main (void)
{
    unsigned int n, m, r1, c1, r, c, testcase;

    cin >> testcase;
    while (testcase--)
    {
        memset(store, false, sizeof(store));
        cin >> n >> m;
        cin >> r1 >> c1;
        cin >> r >> c;

        r1--; c1--;
        r--; c--;
        store[r1][c1]= true;

        // Run the loop
        while ((r1 < n) && (c1 < m) && !((r1 == r) && (c1 == c)))
        {
            cout << "Checking: " << r1 << " " << c1;
            if (((c1 + 1) < m) && !store[r1][c1+1]) {c1++; store[r1][c1] = true;}
            else if (c1 && ((c1 - 1) < m) && (!store[r1][c1-1])) {c1--; store[r1][c1] = true;}
            else if (r1 && ((r1 - 1) < n) && (!store[r1-1][c1])) {r1--; store[r1][c1] = true;}
            else if (((r1 + 1) < n) && (!store[r1+1][c1])) {r1++; store[r1][c1] = true;}
            cout << " :Checked: " << r1 << " " << c1 << endl;
        }
        store[r][c] = true;

        // we have reached our destination
        if (((c+1) < m) && !store[r][c+1]) cout << "Right";
        else if (c && !store[r][c-1]) cout << "Left";
        else if (r && !store[r-1][c]) cout << "Front";
        else if (((r+1) < n) && !store[r+1][c]) cout << "Back";
        else cout << "Over";
        cout << endl;
    }
}
