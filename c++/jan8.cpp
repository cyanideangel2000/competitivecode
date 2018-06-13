#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int testcase, i, j, hash, k, space;
    char ch;
    string str, str1;
    cin >> testcase;

    while(testcase--)
    {
        hash = space = 0;
        cin >> str;
        getline(cin, str1);
        str = str + str1;
        cout << "FedString: " << str << " len: " << str.length() << endl;

        // Start finding hash
        k = 1;
        for (i=0; i<str.length(); i++)
        {
           ch = str[i];

           // ch is not space
           if (ch != ' ') {
               hash = hash + (i - space);

               if (ch >= 'a' && ch <= 'z') hash = hash + (ch - 'a');
               if (ch >= 'A' && ch <= 'Z') hash = hash + (ch - 'A' + 36);
               if (ch >= '1' && ch <= '9') hash = hash + (ch - '1' + 26);

               cout << ch << " " << hash <<  " " << i << " " << space << endl;
           } else {
               int k1;
               cout << "String: ";
               for (k1=space; k1<i; k1++) cout << str[k1];
               cout << endl;

               space = i + 1;
               k++;
           }
        }
        cout << "NumWords: " << k << endl;
        cout << (k * hash) << endl;
    }
}
