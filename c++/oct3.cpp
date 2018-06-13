#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int testcase, j, i;
    int a1, a0, c, n;
    int a2, a3;
    unsigned long num;
    string rawInput;

    // read the num testcase
    cin >> testcase;
    cin.ignore();

    while (testcase)
    {
        getline(cin, rawInput, ' ');
        a0 = atoi(rawInput.c_str());
        getline(cin, rawInput, ' ');
        a1 = atoi(rawInput.c_str());
        getline(cin, rawInput, ' ');
        c = atoi(rawInput.c_str());
        cin >> n;
        
        // Start processing the input
        i = n - 1;
        num = 0;
        a2 = a0;
        a3 = a1;
        while (i > -1)
        {
            if (i)
                num = num * 100 + a2 * 10 + a3;
            else 
                num = num * 10 + a2 ;

            a2 = (a1 * c + a0) % 10;
            a3 = (a2 * c + a1) % 10;

            if ((num % 41) == 0) num = 0;
            else cout << "Num: " << num << endl;

            i = i - 2;
            a1 = a3;
            a0 = a2;
        }
        cout << "Final: " << num << endl;
        if (!num || !(num %41)) cout << "YES" << endl;
        else cout << "NO" << endl;
        testcase--;
    }
}
