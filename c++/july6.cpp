#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main(void)
{
    int n, l1, r1, l2, r2;
    string rawInput, input;
    bool flag;

    cin >> input >> n;
    cin.ignore();
    while (n)
    {
        getline(cin, rawInput, ' ');
        l1 = atoi(rawInput.c_str()) - 1;
        getline(cin, rawInput, ' ');
        r1 = atoi(rawInput.c_str()) - 1;
        getline(cin, rawInput, ' ');
        l2 = atoi(rawInput.c_str()) - 1;
        cin >> r2;
        r2--;

        // we have read all 4 tuple
        if ((r1-l1) != (r2-l2)) cout << "No" << endl;
        else {
            while((l1 <= r1) && (input[l1] == input[l2])) {l1++; l2++;}
            if (l1 > r1) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
        n--;
    }
}

