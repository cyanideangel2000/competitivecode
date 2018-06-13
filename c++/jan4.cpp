#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;
vector <int> store;

int main(void)
{
    int testcase, n, i, j, k, min;

    cin >> testcase;
    while(testcase--)
    {
        cin >> n;

        store.clear();
        store.reserve(n);

        i = n;
        while(i--)
        {
            scanf("%d", &j);
            store.push_back(j);
        }

        do
        {
            min = 999999999;
            j = 0;

            // Find min and process further
            for (i=0; i<n; i++)
            {
                if (min > store[i]) {
                    min = store[i];
                    j = i;
                }
            }

            cout << "MinElement: " << min << " At: " << j << endl;

            // We got the min element and its index
            // lets subtract index from all element
            for (i=0; i<n; i++)
                store[i] = store[i] - j - 1;

            vector<int>:: iterator itr = store.begin();
            for (; itr != store.end();)
            {
                if (*itr < 0) {
                    cout << "Erasing: " << *itr << endl;
                    store.erase(itr);
                    itr = store.begin();
                    n--;
                    continue;
                }
                itr++;
            }
        }while (n>1);
        if (n == 0) cout << "Kushagra" << endl;
        else cout << "Ladia" << endl;
    }
}
