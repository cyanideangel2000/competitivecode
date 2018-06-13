#include <iostream>
#include <vector>
#include <bitset>
#include <string>
#include <cmath>

using namespace std;

int main(void)
{
    unsigned long n, k, m, mod = 1000000007;
    unsigned long a, b, c, d, count, temp;
    string rawstr;

    vector<unsigned char> color;
    bitset<500000> test;
    color.reserve(500000);
    cin >> n >> k >> m;
    a = n;
    while (a > 1)
    {
        getline(cin, rawstr, ' ');
        b = atol(rawstr.c_str());
        color[n-a] = b;
        a--;
    }
    cin >> b;
    color[n-1] = b;


    // We have read all inputs
    count = temp = 1;
    b = pow(2, n);
    for (a = 1; a < b ; a++)
    {
        bitset<10> t1(a);
        cout << "A: " << t1.to_string() << endl;
        d = 0;
        test.reset();
        for(c=0; (a>=(1<<c)); c++)
        {
            if (a & (1<<c)) {
                if (!test.test(c)) {
                    test.set(c);
                    d++;
                }
            }
        }
        if (d <= m) {
            count++;
            bitset<10> t1(a);
            cout << "Updating: D: " << d << " Count: " << count << endl;
        }
    }
    cout << count << endl;
}
