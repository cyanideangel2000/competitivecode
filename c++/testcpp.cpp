#include <iostream>
#include <memory>

using namespace std;

class varun
{
    private:
        const int var;
        int &var1;
    public:
        varun(int v, int v1) : var(v), var1(v1) {}
};

class varun1
{
    private:
        int var;
    public:
       varun1(int b)
       {
           cout << "Constrcuting varun with : " << b << endl;
           var = b;
       }
       ~varun1()
       {
           cout << "Destructing varun with : " << var << endl;
       }
       void print()
       {
           cout << "Varun1 is: " << var << endl;
       }
};

int main(void)
{
    varun var(24, 25);
    cout << "Sizeof(void *) " << sizeof(void *) << " sizeof(int)" << sizeof(int) << endl;

    shared_ptr<varun1> ob(new varun1(3));
    shared_ptr<varun1> ob2 = ob;
    weak_ptr<varun1> ob1(ob);
    ob1.reset();
    if (ob1.expired()) cout<< "WeakPtr is NULL now" << endl;
    ob->print();
    cout << "Resetting shared_ptr" << endl;
    ob2.reset();
    ob->print();

}
