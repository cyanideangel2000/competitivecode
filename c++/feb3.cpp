#include <iostream>
#include <string>
using namespace std;

int main (void)
{
    string input;
    cin >> input;

    for (int i =0; i< input.length(); i++)
    {
        if (input[i] != '?') continue;
        else {

            // we will greedy here
            //
            // if '?' at the first position itself
            if (i == 0) {
                if (input[i+1] == 'b') input[i] = 'a';
                else if (input[i+1] == 'a') input[i] = 'b';
                else input[i] = 'a';
            } else {
                if (input[i-1] != 'a' && input[i+1] != 'a') input[i] = 'a';
                else if (input[i-1] == 'a' || input[i+1] == 'a') input[i] = 'b';
                else input[i] = 'a';
            }
        }
    }
    cout << input << endl;
}

