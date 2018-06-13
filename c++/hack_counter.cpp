#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define POWERNOT2(x) (x & (x-1))
#define HALF(x) (x >> 1)
#define GAME(x) cout << ((x) ? "Richard" : "Louise") << endl;
inline unsigned long long int power2 (unsigned long long int num)
{
    unsigned long long int t = 0;
    while (num > (1<<t)) t++;
    return t-1;
}

int main()
{
    int numtest = 0, i;
    bool luis;
    unsigned long long int n = 0, array[10], t;

    cin  >> numtest;
    i = 0;

    // Read the inputs
    while ((i) < numtest) cin >> array[i++]; 

    i = 0;
    while (i < numtest)
    {
        n = array[i++];
        luis = false;

        // Start to solve
        cout << "FeededN: " << n;
        while (n > 0) {

            // Mark the Player's turn
            if (luis) luis = false;
            else luis = true;

            if (n == 1) {
                GAME(luis);
                break;
            } else {
                if (POWERNOT2(n)) {
                    t = power2(n);
                    n = n - (1 << t);
                    cout << endl << "New N: " << n;
                } else n = n >> 1;
            }
        }

    }
    return 0;
}
