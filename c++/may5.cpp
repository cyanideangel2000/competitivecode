#include <iostream>
#include <bitset>

using namespace std;

bitset<100> prime;

inline
int gcd (unsigned long long n1, unsigned long long n2)
{
    unsigned long long a, b;

    // if either is prime return 1
    if (((n1 < 100) && prime.test(n1)) || ((n2 < 100) && prime.test(n2))) return 1;
    if (n1 == n2) return n1;
    if (n1 < n2) {a = n1;}
    else {a = n2;}
    for (b=a; b>1; b--)
    {
        if (!(n1 % b) && !(n2 % b)) return b;
    }
    return 1;
}

inline
int euler (unsigned long long n1)
{
    unsigned long long t1, t2;
    t2 = 0;
    for (t1=2; t1<n1; t1++)
    {
        if (gcd(t1, n1) == 1) t2++;
    }
    return (1 + t2);
}

int main(void)
{
    unsigned long long n, mod = 1000000007, mod1 = 2 * mod;
    unsigned long long q, t, i, j, k, t1, t2, t3;

    cin >> q;
    while(q--)
    {
        k = 0;
        cin >> t >> n;
        switch (t)
        {
            case 1:
                t1 = 1;
                for (i=1; i<=n; i++)
                {
                    t1 = t1 * n;
                    if (t1 > mod1) t2 = t2 % mod;

                    t2 = t1 * gcd(i, n);
                    if (t2 > mod1) t2 = t2 % mod;
                    k += t2;
                }
                break;
            case 2:
                t1 = 1 << n;
                for (i=1; i<=n; i++)
                {
                    t2 = (t1 << i) * gcd(i, n);
                    if (t2 > mod1) t2 = t2 % mod;
                    k += t2;
                }
                break;
            case 3:
                t1 = 1;
                for (i=1; i<=n; i++)
                {
                    t1 = t1 * n;
                    if (t1 > mod1) t1 = t1 % mod;

                    t2 = euler(t1) * gcd(i, n);
                    if (t2 > mod1) t2 = t2 % mod;
                    k += t2;
                }
                break;
        }
        cout << k << endl;
    }
    return 0;
}
