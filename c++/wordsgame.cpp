#include <iostream>
#include <string>
using namespace std;

int main (void)
{
    int testcase = 0, i, j;
    string alice, bob;
    int ali[26], lenAlice, lenBob;
    char ch;

    cin >> testcase;
    cin.ignore();
    while (testcase)
    {
        testcase--;

        // read Alice sentence
        // cout << "Reading Alice: " << endl;
        getline(cin, alice);

        // read Bob sentence
        // cout << "Reading Bob: " << endl;
        getline(cin, bob);

        // Initialization of the data structure
        memset(ali, 0, sizeof(ali));
        lenAlice = alice.length();
        lenBob = bob.length();

        for (i=0; i < alice.length(); i++)
        {
            ch = alice.at(i);
           if (ch != ' ') ali[ch - 'a'] = ali[ch - 'a'] + 1;

           // Skip the white spaces in Alice, we aren;t bothered about them
           else lenAlice--;
        }
        // cout << "Alice: " << lenAlice << " Bob: " << lenBob << endl;
        for (i=0; i < bob.length(); i++)
        {
            ch = bob.at(i);

            // Skip the whitespaces in Bob
            if ( ch == ' ') lenBob--;
            else if (ali[ch - 'a'])
            {
                ali[ch - 'a']--;
                lenAlice--;
                lenBob--;
            }
        }

        // cout << "Alice: " << lenAlice << " Bob: " << lenBob << endl;
        if (lenAlice && lenBob) cout << "You draw some." << endl;
        else if (lenAlice && !lenBob) cout << "You win some." << endl;
        else cout << "You lose some." << endl;
    }

}
