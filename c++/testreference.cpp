#include <iostream>
using namespace std;

class varun
{
    private:
        int a_;
    public:
        varun(int a):a_(a){}
        int value()
        {
            return a_;
        }
};


int main(void)
{
    varun a1(10), a2(20);
    varun &ref = a1;

    cout << "Value a1: " << ref.value() << endl;
    cout << "Value a2: " << a2.value() << endl;

    ref = a2;
    cout << "Value a2: " << ref.value() << endl;
    cout << "Value a1: " << a1.value() << endl;
}
