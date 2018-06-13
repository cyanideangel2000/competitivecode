#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
    int n, i ,j;
    string rawInput;
    vector<unsigned int> store;

    cin >> n;
    i = 1;
    while (i < n)
    {
        getline(cin, rawInput, ' ');
        store.push_back(atoi(rawInput.c_str()));
        i++;
    }
    cin >> i;
    store.push_back(i);

    // lets sort the weights
    sort(store.begin(), store.end());
    i = 0;
    vector<unsigned int>::iterator itr = store.begin();
    while (itr != store.end())
    {
        j = *itr;
        i++;

        while ((itr != store.end()) && (*(++itr) <= (j+4))) continue;
    }
    cout << i << endl;
}
