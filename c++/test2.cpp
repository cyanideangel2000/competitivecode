#include <iostream>
using namespace std;

class varun
{
    private:
        int i;
    public:
        varun () {
            i = 0; 
            cout << endl << "Hitting Varun's Constructor";
        }
        void set (int a) {
            i = a;
        }
};

varun f (varun ob)
{
    cout << endl << "Entering Fun";
    ob.set (10);
    cout << endl << "Exiting Fun";
    return ob;
}

int main (void)
{
    varun ob, ob1;
    cout << endl << "In Main, calling Fun";
    ob1 = f(ob);

    cout << endl << "Testing auto";
    for (auto i = 0; i<10; i++) cout << i;
}
