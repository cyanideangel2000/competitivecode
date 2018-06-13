#include <iostream>  
using namespace std;  

class Base
{  
    public:  
           virtual void vvfunc() {}  
};  
  
class Derived : public Base
{
};
  
int main()
{  
    Derived* pd = new Derived;  
    Base* pb = pd;  
    cout << typeid( pb ).name() << endl;   //prints "class Base *"  
    cout << typeid( *pb ).name() << endl;   //prints "class Derived"  
    cout << typeid( pd ).name() << endl;   //prints "class Derived *"  
    cout << typeid( *pd ).name() << endl;   //prints "class Derived"  
    delete pd;  
}  

