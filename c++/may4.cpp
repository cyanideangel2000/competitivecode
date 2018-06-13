#include <iostream>
#include <set>
#include <complex>

using namespace std;

set<unsigned long int> prime;
int main(void)
{
    unsigned long int n, q, i, j, k, curp = 0, curd = 1;
    unsigned long int x, y, z, dis = 0, ppl = 0, mod = 1000000007;
    bool valid;
    cin >> n >> q;

    while(q--)
    {
        cin >> i >> j >> k;
        valid = true;

        // Take the modulus opertion
        if (dis > mod) {
            dis = dis % mod;
        }

        //handle the entry event
        if (i == 1) {

            // Check if we know this number to be prime before
            // If not, we find and store the info
            if (prime.find(j+k) == prime.end()) {

                // If not divisible by 2, only then
                if ((i+j) % 2) {
                    for (x=3; x<(((j+k) >> 1) + 1);)
                    {
                        if ((j+k) % x == 0) break;
                        x = x + 2;
                    }
                    if (x < (((j+k)>> 1) +1)) valid = false;
                } else valid = false;
            }

            // Transaction is valid
            // We will process it and store the result
            if (valid) {
                prime.insert(j+k);
                dis = dis + abs((long long)(curd - j)); 
                curd = j;

                ppl = curp + k;
                curp = ppl;
            }
        } else {
            // handle the exti event
            y = 2;
            if (prime.find(j+k) == prime.end()) {
                for(x=2; x<(j+k); x++)
                {
                    if ((j+k) % x == 0) y++;
                }

                // Valid transaction
                if (y % 2) {
                    dis = dis + abs((long long)(curd - j));
                    curd = j;

                    ppl = curp - k;
                    curp = ppl;
                }
            }
        }
    }
    cout << dis << " " << ppl;
}
