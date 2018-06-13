#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int testcase, n, m, sum1 = 0, sum2 = 0;
    string rawInput;
    vector<int> even, odd;
    even.reserve(1000);
    odd.reserve(1000);

    cin >> testcase;
    cin.ignore();
    while (testcase > 1)
    {
        getline(cin, rawInput, ' ');
        n = atoi(rawInput.c_str());

        // if n is odd
        if (n & 1) {
            sum2 = sum2 + n;
            odd.push_back(n);
        } else {
            sum1 = sum1 + n;
            even.push_back(n);
        }
        testcase--;
    }
    cin >> n;
    if (n & 1) {
        sum2 = sum2 + n;
        odd.push_back(n);
    } else {
        sum1 = sum1 + n;
        even.push_back(n);
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    for (n=0; n<even.size(); n++) cout << even[n] << " ";
    cout << sum1 << " ";
    for (n=0; n<odd.size(); n++) cout << odd[n] << " ";
    cout << sum2 << endl;
    return 0;

}

