#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <map>
using namespace std;

int main (void)
{
    long testcase, n, p1, p2, n1, n2; 
    string rawInput;

    cin >> testcase;
    
    p1 = p2 = n1 = n2 = 0;
    while (testcase > 0)
    {
        cin >> n;
        if (n > p1) {
            if (n > p2) {p1 = p2; p2 = n;}
            else p1 = n;
        } else if (n < n1) {
            if (n < n2) {n1 = n2; n2 = n;}
            else n1 = n;
        }
        testcase--;
    }

    // cout << p1 << " " << p2 << " " << n1 << " " << n2 << endl;
    n = n1 * n2;
    testcase = p1 * p2;
    if (n > testcase) cout << n << endl;
    else cout << testcase << endl;
}
