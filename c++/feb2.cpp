#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main(void)
{
    string raw;
    unsigned int n, q, i, j, k;
    unsigned long count;
    vector<unsigned int>row;

    cin >> n >> q;
    row.reserve(n);
    i = n;
    while (i)
    {
        scanf("%d", &k);
        row.push_back(k);
        i--;
    }
    while (q)
    {
        q--;
        scanf("%d", &i);
        if (1 == i) {
            unsigned int l, r;
            scanf("%d %d %d", &k, &l, &r);
            for (i=l; i<=r; i++)
            {
                if (k > i) n = k - i;
                else n = i - k;
                count = count + row[i-1] * n;
                //cout << "1: " << row[i-1] << " " << n << endl;
            }
            cout << count << endl;
            count = 0;
        } else if (2 == i) {
            scanf("%d %d", &i, &j);
            row[i-1] = row[i-1] + j;
        }
    }
}
