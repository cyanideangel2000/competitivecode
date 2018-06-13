#include <iostream>
#include <string>
#include <vector>
#include <bitset>

using namespace std;
int main(void)
{
    int n, m, i;
    string str;
    unsigned long long max, j, k;
    vector<unsigned long long> store;
    bitset<500>temp;

    cin >> n >> m;
    for (i=0;i <n; i++)
    {
        cin >> str;
        temp = bitset<500>(str);
        store.push_back(temp.to_ullong());
    }

    // We have stored all bit
    vector<unsigned long long>::iterator itr, itr1;
    max = 0;
    itr = store.begin();
    itr1 = itr+1;
    while (itr !=store.end())
    {
        k = 0;
        j = max;
        while(itr1 != store.end())
        {
            k = (*itr1) | (*itr);
            if (k > j) j = k;
            if (j > max) {i = 1; max = j;}
            else if (j == max) i++;
            //cout << k << " " << j << " " << max << " " << i << endl;
            itr1++;
        }
        itr++;
    }

    temp = bitset<500>(max);
    cout << temp.count() << endl << i << endl;
}
