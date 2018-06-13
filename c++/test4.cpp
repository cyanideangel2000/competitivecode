#include <iostream>
using namespace std;

int main(void)
{
    int i;
    while (1)
    {
        cin >> i;
        switch(i)
        {
            case 1: cout << 1 << endl;break;
            case 2: cout << 2 << endl;break;
            case 1: cout << 3 << endl; break;
            default: cout << "Error" << endl;
        }
    }
}
