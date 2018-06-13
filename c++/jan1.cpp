#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(void)
{
    unsigned long s, q, i, j, t;
    set<unsigned long> store;

    cin >> s >> q;
    j = 1;
    while (q--)
    {
        cin >> i;
        t = min(i, s);

        for (j=t; j>0; j--)
        {
            if ((s%j == 0) && (i%j == 0))
            {
                if (store.find(j) != store.end()) cout << -1 << endl;
                else {
                    store.insert(j);
                    cout << j << endl;
                }
                break;
            }
        }
    }
}
