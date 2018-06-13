#include <vector>
#include <iostream>
#include <bitset>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i;
    string str;
    bitset <26> bits;
    getline(cin, str);
    for (i=0; i<str.length(); i++)
    {
        if (str[i] == ' ') continue;
        else if (str[i] < 'a') {
            bits.set(str[i] - 'A');
        } else 
            bits.set(str[i]-'a');
    }
    for (i=0; i<26; i++)
        if (!bits.test(i)) {
            cout << "not pangram" << endl;
            return 0;
        }
    cout << "pangram" << endl;
    return 0;
}

