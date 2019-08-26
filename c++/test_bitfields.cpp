#include <iostream>
using namespace std;

// Copied from MS example
struct mybitfields
{
    unsigned short a : 4;
    unsigned short b : 5;
    unsigned short c : 7;
} test;

int main(void)
{
    cout << sizeof(mybitfields) << endl;
}
