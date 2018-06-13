#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    unsigned long testcase, a1, a2, i, j;
    string rawInput;

    cin >> testcase;
    cin.ignore();
    while (testcase)
    {
        getline(cin, rawInput, ' ');
        a1 = atoi(rawInput.c_str());
        cin >> a2;
        
        j = a1;
        for (i=a1; i<=a2; i++) j = j & i;
        cout << j << endl;

        testcase--;
    }
}
