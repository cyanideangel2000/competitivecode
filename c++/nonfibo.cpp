#include <iostream>
#include <vector>
using namespace std;

int main (void)
{
    int testcase = 0;
    unsigned long max = 0, temp, i, fib1, fib2, fibn;
    vector<unsigned long> num, num1;

    cin >> testcase;
    cin.ignore();
    while (testcase)
    {
        testcase--;
        cin >> temp;
        num.push_back(temp);
        if (max < temp) max = temp;
    }

    num1 = num;
    // So we now have the max
    // we will find all finbonacci numbers till max
#if DEBUG
    cout << endl << "Max: " << max << endl;
#endif
    fib1 = 2;
    fib2 = 3;
    temp = 0;
    sort(num.begin(), num.end());
    for (i=4; temp<max; i++)
    {
        if ((i==fib1) || (i==fib2)) continue;
        else
        {
            if (i > fib2)
            {
                fibn = fib1 + fib2;
                fib1 = fib2;
                fib2 = fibn;
            }
            temp++;
#if DEBUG
            cout << "NonFib: " << temp << " : " << i << endl;
#else
            for (testcase = 0; testcase < num.size(); testcase++)
                if (num[testcase] == temp) cout << i << endl; 
#endif
        }
    }
}
