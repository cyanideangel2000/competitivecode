#include <iostream>
#include <vector>
#include <cstdlib>
#include <bitset>
using namespace std;

vector<unsigned int> store;
bitset<1000000001> diff;

int main (void)
{
    unsigned int n, i, j, k, num = 0, count = 0;
    cin >> n;
    i = n;
    while (i--)
    {
        scanf("%u", &j);
        store.push_back(j);
        diff.set(j);
    }
    num = diff.count();
    cout << "Num of distinct num: " << num << endl;

    // Start finding the subarrys
    // i = start of the subarray
    // j = end of subarray
    for (i=0; i<n; i++)
    {
        diff.reset();
        j = i;

        while((j < n) && (diff.count() < num))
        {
            diff.set(store[j]);
            j++;
        }

        // here either j has reached n, or diff.count is num
        if (diff.count() == num) {
            count++;
            cout << "Found: " << i << " " << (j-1) << " Count: " << count << endl;
            count += (n - j);
            cout << "Updated Count: " << count << endl;
        }
    }
    cout << count << endl;
}
