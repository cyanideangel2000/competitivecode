#include <iostream>
using namespace std;

class Test
{
    public:
        int a;
        Test()
        {
            a = 0;
            cout << "in Test(): " << a << endl;
        }

        Test(int b)
        {
            a = b;
            cout << "in Test(b): " << a << endl;
        }
        ~Test()
        {
            cout << "In destructing Test: " << a << endl;
        }
        Test (Test &rhs)
        {
            a = rhs.a;
            cout << "in CopyConstructor: " << a << endl;
        }
};

Test temp()
{
    cout << "In function" << endl;
    Test t3(20);
    return t3;
}

class A
{
    public:
        A() { a_ = 10; cout << "Consturctor A " << a_ << endl; }
        int a_;
        ~A() { cout << "Destructing A" << endl; }
};

class B: public A
{
    public:
        B() { a_ = 11; cout << "Constructor B " << a_ << endl; }
        ~B() { cout << "Destructing B" << endl; }
};

int main (void)
{
    Test t1, t2(10), t3;
    cout << t1.a << endl;
    cout << t2.a << endl;
    t3 = temp();
    cout << "After func: " << t3.a << endl;
    cout << "After func: " << temp().a << endl;
    cout << "ConsturctorTest" << endl;
    B b;
    cout << "end" << endl;
}
