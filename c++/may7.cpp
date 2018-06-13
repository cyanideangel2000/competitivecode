#include <iostream>
#include <map>

using namespace std;

int main(void)
{
    unsigned long long int n, i, j, k, t1, prev = 0;
    map<unsigned long int, unsigned int> store;
    bool flag = true;

    cin >> n;

    if (n == 1) {cout << n << endl; return 0;}

    j = n;
    while(1)
    {
        flag = true;
        i = 2;
        while(j > 1)
        {
            k = 0;
            while ((j > 1) && (j%i == 0))
            {
                k++;
                j = j / i;
            }
            if (k) {
                t1 = store[i];
                if (t1 < k) {
                    store[i] = k;
                    flag = false;
                }
            }
            i++;
        }
        if (flag) {
            if (!prev) prev = n;
            else if ((prev - n) == 1) break;
        }
        n--;
        j = n;
    }
    cout << prev << endl;
}
