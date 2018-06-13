#include <iostream>
using namespace std;

int func(void)
{
    cout << "In " << __FUNCTION__ << endl;
    return 3;
}

int gi = func();

int main()
{
    cout << "In " << __FUNCTION__ << " " << gi << endl;
    return gi;
}
