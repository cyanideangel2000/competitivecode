#include <iostream>
#include <map>
#include <vector>
using namespace std;

#define NOTPOWER2(x) (x & (x-1))
#define HALF(x) (x >> 1)

vector<unsigned long long int> power2;

int main()
{
    int numtest = 0, i;
    bool luis;
    unsigned long long int n = 0, n1;

    // store the power of 2's for future use
    for (i=0; i<=(sizeof(unsigned long long int) * 8); i++)
    {
        power2.push_back(1<<i);
    }

    cin  >> numtest;
    while (numtest--)
    {
        luis = false;
        cin >> n;
        n1 = n;

        // we start the game
        while (n > 1)
        {
            luis = !luis;
            if (NOTPOWER2(n)) {
                for (i=0; i< power2.size(); i++)
                    if (n > power2[i]) continue;
                    else break;
                n = n - power2[i-1];
            } else {
                n = n >> 1;
            }
        }
        cout << ((luis) ? "Louise" : "Richard") << endl;
    }
    return 0;
}
