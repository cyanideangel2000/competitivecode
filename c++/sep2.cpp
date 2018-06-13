#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> store;
    int start, end, n, i, j, k;

    cin >> n;
    store.reserve(n);

    store.push_back(0);
    j = n;
    while(j--)
    {
        scanf("%d", &i);
        store.push_back(i);
    }
    cin >> start >> end;

    if (start == end) {
        cout << "Yes" << endl;
        return 0;
    }

    j = 0; k = 0;
    while(k < (n + 20))
    {
        j = store[start];
        start = j;
        if (start == end) {
            cout << "Yes" << endl;
            return 0;
        }
        k++;
    }
    cout << "No" << endl;
    return 0;
}
