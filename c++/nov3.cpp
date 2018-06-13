#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
    int n, q, i, j, t;
    string str;
    char *str1 = NULL;
    vector<int> input;
    vector<int> store;

    cin >> n >> str >> q;
    input.reserve(q);
    store.reserve(n + 1);

    i = q;
    while (i)
    {
        cin >> t;
        input.push_back(t);
        i--;
    }

    // We have read all inputs
    char ch = str[0];
    i = 0;
    t = 0;
    while (i < n)
    {
        if (str[i] >= ch) store[i] = 0;
        else {
            store[i] =  store[i-1] + 1;
            if (t == 0) t = i;
            ch = str[i];
        }
        cout << "Varun: " << i << " " << store[i] << endl;
        i++;
    }
    cout << "Varun:Varun " << t << endl;
    i = t;
    while(i<n)
    {
        if (store[i-1] == 0) store[i] = t;
        else store[i] = store[i-1] - 1 + store[i];

        cout << "Varun: " << i << " " << store[i] << endl;
        i++;
    }
}
