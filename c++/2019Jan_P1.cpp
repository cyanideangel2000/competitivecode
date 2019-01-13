// Problem Link:
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/seven-segment-display-nov-easy-e7f87ce0/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Keep a map handy
vector<int> numtomatch {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int main(void)
{
    unsigned long t, stick, temp, i, j, k;
    char *ch;
    string number, input;

    cin >> t;
    while (t--)
    {
        cin >> input;
        stick = 0;

        // cout << "The number: "<< input << endl;
        for (i = 0; i < input.length(); i++)
        {
            ch = &input[i];
            j = *ch - '0';
            stick += numtomatch[j];
        }
        // cout << "NumStick: " << stick << endl;

        // try to find the largest number possible
        temp = stick;

        // largest is also the longest, so lets check the longest we can create
        // and 1 has least number matchsticks
        i = 0;
        number.clear();
        while (temp >= numtomatch[1])
        {
            temp  = temp - numtomatch[1];
            number += '1';
            i++;
        }

        // the longest will be "i" digits long
        // cout << "maxLength: " << i << " temp: " << temp << endl;
        if (temp) {
            number[0] = '7';
        }
        cout << number << endl;
    }

}
