#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(void)
{
    int testcase, n, i, j, k, l;

    unsigned int xorr;
    vector<int> store;
    cin >> testcase;
    while (testcase)
    {
        cin >> n;
        store.clear();
        store.reserve(n);
        for (i=0; i<n; i++)
        {
            scanf("%d", &k);
            store.push_back(k);
        }
        j = 2;
        xorr = 0;

        while (j <= n)
        {
            xorr = xorr ^ (store[0] ^ k);
            j++;
        }
        cout << xorr << endl;
        testcase--;
    }
    return 0;
}
