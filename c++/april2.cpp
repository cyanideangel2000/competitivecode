#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    unsigned long long t1 = 1, t2 = 2, t3 = 3, i, j, s1, s3, s2, num;

    cin >> num;

    s1 = s2 = s3 = 0;
    i = 1;
    while(i<=num)
    {
        scanf("%llu", &j);
        cout << j << endl;
        if (i == t1) {
            s1 = s1 + j;
            t1 = t1+3;
        } else if (i == t2) {
            s2 = s2 + j;
            t2 = t2 + 3;
        } else if (i == t3) {
            s3 = s3 + j;
            t3 = t3 + 3;
        }
        i++;
    }
    cout << s1 << " " << s2 << " " << s3 << endl;
    return 0;
}
