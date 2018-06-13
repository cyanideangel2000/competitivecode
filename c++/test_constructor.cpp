#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

class Test {
    public:
        int a;
        Test(int b)
        {
            cout << "In Constructor: " << b << endl;
            a = b;
        }
        Test (const Test& rhs)
        {
            a = rhs.a;
            cout << "In Copy Constructor: " << a << endl;
        }
        ~Test ()
        {
            cout << "In destructor: " << a << endl;
        }
};


void temp (Test a)
{
    cout << __FUNCTION__ << endl;
}

Test temp1 ()
{
    cout << "in function" << endl;
    return Test(94);
}

int main()
{
        vector<Test> vec;
        Test t(10), t1(11);

        vec.push_back(t);
        vec.push_back(t1);
        vec.push_back(t1);
        t.a = 20;
        t1.a = 21;
        cout << vec[0].a << " " << vec[1].a << endl << t.a << " " << t1.a << endl;

        cout << "Testing: " << endl;
        Test t2(30), t3(40);
        t3 = t2;
        cout << "Post Assignment: " << t2.a << " " << t3.a << endl;
        cout << "Calling Funtion: " << endl;
        temp(t3);


        unsigned long var = ~(0ULL);
        cout << std::hex << var << endl;
        
        unsigned int var1 = 1;
        cout << std::hex << var1 << " " << ~var1 << endl;


        // getting sizeof
        bitset<200> varun;
        cout << sizeof(int) << " " << sizeof(long) << " " << sizeof(bool) << " " << sizeof(varun) << " " << sizeof(unsigned long long int) << endl;

        // Testing returning objects
        cout << endl << "Testing returning objects" << endl;
        Test t6(19), t5 = temp1();
        cout << "Returned: " << t5.a << endl;
	return 0;
}
