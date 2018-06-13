#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main(void)
{
    unsigned long n, max1 = 0, max2 = 0, max3 = 0, temp;
    string rawInput, input;

    cin >> n;
    cin.ignore();
    getline(cin, rawInput, ' ');n--;
    temp = atol(rawInput.c_str());
    getline(cin, rawInput, ' ');n--;
    max2 = atol(rawInput.c_str());
    if (temp > max2) max1 = temp;
    else {
        max1 = max2;
        max2 = temp;
    }
    cout << -1 << endl << -1 << endl;
    while (n > 1)
    {
        getline(cin, rawInput, ' ');
        temp = atol(rawInput.c_str());

        // if we only we have sufficient number of elements
        // current max1 is less than temp
        if (max1 < temp) {
            max3 = max2;
            max2 = max1;
            max1 = temp;
        } else if (max2 < temp) {
            max3 = max2;
            max2 = temp;
        } else if (max3 < temp) {
            max3 = temp;
        }
        cout << max1 * max2 * max3 << endl;

        n--;
    }
    cin >> temp;
    if (max1 < temp) {
        max3 = max2;
        max2 = max1;
        max1 = temp;
    } else if (max2 < temp) {
        max3 = max2;
        max2 = temp;
    } else if (max3 < temp) {
        max3 = temp;
    }
    cout << max1 * max2 * max3 << endl;
}

