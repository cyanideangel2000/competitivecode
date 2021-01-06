#include <iostream>
using namespace std;

class A
{
    public:
        A() { cout << " A constructor" << endl;}
        ~A() { cout << " A destructor" << endl;}
};

int main(void)
{
    for (int i =0 ; i < 5; i++) {cout << "i = " << i; A a; cout << "i = " << i;}
    cout << "Done" << endl;
}
