#include <iostream>
using namespace std;

int main(void)
{
    unsigned log r,g,b,i,j,k,l,min = -1, max = 0;
    
    cin >> r >> g >> b;

    if (r > g && r > b) max = r;
    else if (g > r && g > b) max = g;
    else  max = b;

    if (r & 1) i = (1 + r) >> 1;
    else i = r >> 1;

    if (g & 1) j = (1 + g) >> 1;
    else j = g >> 1;

    if (b & 1) i = (1 + b) >> 1;
    else k = b >> 1;
}
