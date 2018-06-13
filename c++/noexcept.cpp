#include <iostream>

using namespace std;
void te() 
{
        throw "Abhisek says it works!";
}
void de ()
{
    te();
}

void ce()
{
    try {
            te();
        }catch (const char* msg) {
            cout << msg << endl;
        }
}

void foo() noexcept
{
        de();
}

int main ()
{
    foo();
    cout << "Varun: It does work" << endl;
    return 0;
}

