#include <iostream>
#include <vector>
using namespace std;

int main (void)
{
    int testcase = 0;
    unsigned long max = 0, temp, i, fib1, fib2, fibn;
    vector<unsigned long> num;
    vector<unsigned long> result;

    cin >> testcase;
    cin.ignore();
    while (testcase)
    {
        testcase--;
        cin >> temp;
        num.push_back(temp);
        if (max < temp) max = temp;
    }

    // So we now have the max
    // we will find all finbonacci numbers till max
    fib1 = 2;
    fib2 = 3;
    temp = 0;
    testcase = 0;
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
            result.push_back(i);
        }
    }

    for (i=0; i<num.size(); i++)
    {
        testcase = num[i];
        cout << result[testcase-1] << endl;
    }
}
