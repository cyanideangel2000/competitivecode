#include <iostream>
#include <map>
using namespace std;

class varun
{
    public:
        varun() {cout << "In Cons: " << endl;};
        ~varun() {cout << "in Des: " << endl;};
};

int main (void)
{
    map<int, varun> store1;
    map<int, varun *> store2;

    varun var;

    cout << "1" << endl;
    store1[10] = var;

    cout << "2" << endl;
    varun *varu1 = &var;

    cout << "3" << endl;
    store2[10] = varu1;

    cout << "4" << endl;
    store1.erase(10);
    store2.erase(10);
}
