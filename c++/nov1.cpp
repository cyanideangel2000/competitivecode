#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    int testcase, a0, a1, n, mod;
    int i, j;
    unsigned int count;
    string raw;
    vector<int> store;
    vector<int> ::iterator itr;

    cin >> testcase;
    store.reserve(1000000);
    while (testcase)
    {
        getline(cin, raw, ' ');
        a0 = atoi(raw.c_str());

        getline(cin, raw, ' ');
        a1 = atoi(raw.c_str());

        getline(cin, raw, ' ');
        n = atoi(raw.c_str());

        cin >> mod;
        store[0] = a0;
        store[1] = a1;
        for (i=2; i<n; i++)
        {
            store[i] = (store[i-2] + store[i-1]) % mod;
        }
        sort(store.begin(), store.begin() + n);
        a0 = 1;
        a1 = 0;
        count = 0;
        for (i=1;i<n; i++)
        {
            if (store[i-1] == store[i]) a0++;
            else {
                count = count + (a0 * a0);
                a0 = 1;
            }
        }
        count += (a0 * a0);
        cout << count << endl;

        testcase--;
    }
}
