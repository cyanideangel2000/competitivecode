#include <iostream>

class A{

    int a;
public :
    A() { std::cout << "A ctor \n";}
    A(int x) : a(x) {
            std::cout <<"A param ctr \n";}
        
    ~A() { std::cout <<"A dtror " << a << "\n  ";}

    int fun_a() { 
        std::cout <<"fun_a \n";      
        return a; }

};

class B
{

    A a_;

public:
    B(): a_(0) { std::cout <<" B ctor\n ";}
    B (int x) : a_(x) { std::cout <<"B p ctr "<< x << " \n"; } 
    ~B() { std::cout <<" B dtor \n"; }
    int fun_b() {
        std::cout << "fun b \n";
      return  A(10).fun_a();
    }
    
};

int main()
{

    B b(100);
    int x = b.fun_b();

    std::cout << "b.get_b " << x <<std::endl ;

}



