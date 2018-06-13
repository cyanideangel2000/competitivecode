#include <iostream>
#include <bitset>
using namespace std;

int main(void)
{
    unsigned int n, temp = 1;
    int i;

    cin >> n;
    bitset<32> bits(n);

    cout << endl << n << " in binary: " << bits;
    for (i=0; i< 32; i++)
    {
        if ( n < (1 << i)) break;
    }
    cout << endl << "Answer: " << (1 << i) << endl;
    
}
