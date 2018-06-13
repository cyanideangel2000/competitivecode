#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int testcase, count, j;
    unsigned long n, i, temp;
    vector<unsigned int> store;

    cin >> testcase;
    store.reserve(1000000);
    while (testcase)
    {
        count = 0;
        cin >> n;

        // number of trailing zeros in n! = number of multiple of 5
        // between 1 to n
        i = 1;
        if (n < 1000000) {
            for (j = n; j > -1; j--)
            {
                if (store[j]) {
                    count = store[j];
                    i = j + 1;
                    break;
                }
            }
        } else {
            for (j = 1000000; j>-1; j--)
            {
                if (store[j]) {
                    count = store[j];
                    i = j + 1;
                    break;
                }
            }
        }

        for (; i<=n; i++)
        {
            if (i % 5) continue;
            else {
                temp = 5;
                count++;

                while (temp < n) 
                {
                    temp *= 5;
                    if ((i % temp) == 0) count++;
                }

                
            }
        }
        cout << count << endl;
        testcase--;
    }
}
