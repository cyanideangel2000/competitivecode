// An example that uses reinterpret_cast.
#include <iostream>
using namespace std;
int main()
{
    long i;
    char *p = "This is a string";
    cout << endl <<"P is: " << p << "sizeof(pointer): " << sizeof(p) << "sizeof(int): " << sizeof(i) << endl;
    i = reinterpret_cast<long> (p); // cast pointer to integer
    cout << i;
    return 0;
}
