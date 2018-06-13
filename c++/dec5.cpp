#include <iostream>
#include <string>
#include <vector>
#include <bitset>

using namespace std;
int main(void)
{
    int n, m, i;
    unsigned int a1;
    string str;
    unsigned long long max, j, k;
    vector<bitset<500> > store;
    bitset<500>temp;

    cin >> n >> m;
    for (i=0;i <n; i++)
    {
        cin >> str;
        temp = bitset<500>(str);
        store.push_back(temp);
    }

    // We have stored all bit
    vector<bitset<500> >::iterator itr, itr1;
    max = 0;
    i = 0;
    itr = store.begin();
    while (itr !=store.end())
    {
        itr1 = itr+1;
        while(itr1 != store.end())
        {
            k = 0;
            for (a1 = 0; a1 < 500; a1++)
            {
                bitset<500> a2 = *itr;
                bitset<500> a3 = *itr1;
                if (a2.test(a1) || a3.test(a1)) k++;
            }

            if (k > max) {max = k; i = 1;}
            else if (k == max) i++;
            itr1++;
        }
        itr++;
    }

    cout << max << endl << i << endl;
}
