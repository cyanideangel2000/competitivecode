#include <iostream>       // std::cout
#include <string>         // std::string
#include <bitset>         // std::bitset

int main ()
{
    std::bitset<16> foo;
    std::bitset<16> baz (std::string("0101111001"));

    std::cout << "foo: " << foo << '\n';
    std::cout << "baz: " << baz << '\n';
    std::cout <<"baz: " << baz.test(0) << " " << baz.test(1) << "\n";

    // test 2
    std::bitset<10000000> varun;
    std::bitset<50000000> varun1;

    std::cout << sizeof(varun) << " " << sizeof(varun1) << std::endl;

    return 0;
}
