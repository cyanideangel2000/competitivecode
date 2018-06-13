#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <map>
using namespace std;

int main (void)
{
    unsigned long testcase, n, x, mod = 1000003, temp, ans;
    string rawInput;
    vector <unsigned long> input;
    vector <unsigned long> item;
    map<unsigned long, unsigned long> result;

    cin >> testcase;
    cin.ignore();

    input.reserve(testcase);
    item.reserve(testcase);

    while (testcase > 0)
    {
        // read N, the number of the box
        // read X, the initial num of item in box 0
        getline(cin, rawInput, ' ');
        cin >> x;
        n = atol(rawInput.c_str());
        if (x > mod) x = x % mod;

        // store the N and X
        input.push_back(n);
        item.push_back(x);

        // map always stores data sorted by keys
        // initialising the result map
        result.insert(std::make_pair(n, 1));
        testcase--;
    }

    temp = ans = 1;
    for (map<unsigned long, unsigned long>::iterator it=result.begin(); it!=result.end(); ++it)
    {
        n = (*it).first;
        while (temp <= n)
        {
            ans = ans * temp;
            if (ans > mod) ans = ans % mod;
            temp++;
        }
//        cout << "FactFor: " << n << " " << ans << endl;
        (*it).second = ans;
    }
    testcase = 0;
    for (testcase = 0; testcase < input.size(); testcase++)
    {
        n = input[testcase];
        ans = result[n] * item[testcase];
        if (ans > mod) ans = ans % mod;
        cout << ans << '\n';
    }
    cout << endl;
}
