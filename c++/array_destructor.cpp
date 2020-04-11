#include <iostream>
using namespace std;

class v1
{
    public:
        int a1;
        v1 () : a1(0){cout << "Const: V1" << endl;}
        ~v1() {cout << "Dest: V1" << endl;}
};

class v2 : public v1
{
    public:
    int a2;
    v2 () : a2(1){a1 = 1; cout << "Const: V2" << endl;}
    ~v2() {cout << "Dest: V2" << endl;}
};


int main(void)
{
    v1 *ptr = NULL;

    cout << "Creating v1 stack" << endl;
    v1 t1[2];

    cout << "Creating v2 stack" << endl;
    v2 t2[2];

    cout << "Creating v1 array" << endl;
    v1 *t11 = new v1[2];

    cout << "Creating v2 array" << endl;
    v2 *t22 = new v2[2];
    cout << "Creating v2 array" << endl;
    v2 *t23 = new v2[2];

    cout << "Deleting v1 heap array" << endl;
    ptr = t11;
    delete [] ptr;

    cout << "Deleting v2 heap array" << endl;
    ptr = dynamic_cast<v1 *>(t22);
    delete [] ptr;
    cout << "Deleting v2 heap via v2 ptr" << endl;
    delete [] t23;

    cout << "Stack objects get deleted now" << endl;
}
