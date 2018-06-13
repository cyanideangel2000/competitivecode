#include <iostream>
#include <bitset>
using namespace std;

int main(void)
{
    unsigned long int n, k, i=1, j=0, c, t;
    std::string input;

    cin >> n;
    cin.ignore();
    cin >> k;
    cin.ignore();

    cin >> input;
    bitset<10> cipher(input), num2, num;

    cout << "Cipher: " << cipher.to_string() << " Size: " << cipher.size() << " N: " << n << " K: " << k << endl;

    // Corner case when K = 1, ie no rotation has been done.
    if (k == 1)
    {
        cout << cipher.to_string() << endl;
        return 0;
    }

    c = (n+k-1)-1;

    // MSB K bits
    for (i=0; i<k; i++)
    {
        cout << "At " << i <<"th iteration, " << j << " " << cipher[c-i] << endl;
        num[n-i-1] = cipher[c-i] ^ j;
        j = j ^ num[n-i-1];

        cout << "At " << i <<"th iteration, Num: " << num.to_string() << endl;
    }

    // LSB k bits
    // Setting the LSB which is always same as LSB of cipher
    num[0] = cipher[0];

    j = 0;
    for (i=0; i<k; i++)
    {
        cout << "At " << i <<"th iteration, " << j << " " << cipher[n-1-i] << endl;
        num[i] = cipher[i] ^ j;
        j = j ^ num[i];

        cout << "At " << i <<"th iteration, Num: " << num.to_string() << endl;
    }

    if (n <= (2*k))
    {
        cout << num.to_string() << endl;
        return 0;
    }

    // Middle n-2k bits
    cout << endl;
    j = 0;
    for (i=1; i<k; i++)
    {
        cout << "At " << i <<"th iteration, : " << (n-1)-(k-1)+(i-1) << " " << num[(n-1)-(k-1)+(i-1)] << endl;
        j = j ^ num[(n-1)-(k-1)+(i-1)];
    }

    t = (n-1)-(k-1)+(i-1)-1; 
    for (i=0; i<(n-(2*k)); i++)
    {
        num[(n-1)-(k-1)-1-i] = j ^ cipher[c-k-i];
        j = j ^ num[t-i];
    }
    cout << num.to_string() << endl;
}
