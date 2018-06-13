#include <iostream>
using namespace std;

int main(void)
{
    char *ptr[] ={"varun", "tewari", "threee", "hehhehe"};

    cout << "Sizeof array: "<< sizeof(ptr) / sizeof(char *);
}
