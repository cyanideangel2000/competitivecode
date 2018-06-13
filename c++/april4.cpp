#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<int> store;

int main(void)
{
    int i, j, k, n, a, b, c, d;
    string input;

    cin >> n >> k;
    store.reserve(n);
    i = n;
    while (i>1)
    {
        getline(cin, input, ' ');
        a = atoi(input.c_str());
        store.push_back(a);
        i--;
    }
    cin >> a;
    store.push_back(a);

    // We have read all numbers
    // Lets sort the array
    sort(store.begin(), store.end());
    i = 0;
    j = n-1;
    d = store[j] - store[i];

    // if the maximum is already less than k
    if (d < k) {
        cout << k << endl;
        return 0;
    }

    while(i < j)
    {
        a = store[j] - store[i];

        // Even if there exist a single pair
        // which difference is already less than k
        if (a < k) {
            cout << a << endl;
            return 0;
        }

        // add to smaller and subtract from bigger
        b = (store[j] -k) - (store[i] + k);

        // subtract frm smaller and add from bigger
        c = (store[j] + k) - (store[i] - k);

        if (b < c) {
            store[j] = store[j] - k;
            store[i] = store[i] + k;
        } else {
            store[j] = store[j] + k;
            store[i] = store[i] - k;
        }
        i++;
        j--;
    }
    sort(store.begin(), store.end());
    cout << store[n-1] - store[0] << endl;
}
