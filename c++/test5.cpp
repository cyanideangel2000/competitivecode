#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    string version = "Varun" + string("Tewari");
    cout << version << endl;

    // std::find test
    cout << "STD::FIND test " << endl;
    char *ptr = "Varun", *temp = NULL;

    temp = find(ptr, ptr+4, 'r');
    cout << (temp - ptr) << endl;

    temp = find(ptr, ptr+3, 'n');
    cout << (temp - ptr) << endl;

    temp = find(ptr, ptr+5, 'n');
    cout << (temp - ptr) << endl;

    temp = find(ptr, ptr+16, 'i');
    cout << (temp - ptr) << " " << *temp << endl;
}
