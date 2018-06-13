#include <iostream>
#include <list>
using namespace std;


int main(void)
{
    unsigned long n, max = 0, min = 0xffffffffffffffff, temp, temp1;
    bool flag = false;
    size_t pos;
    string rawInput, str1;
    list<unsigned long> input;

    cin >> n;
    cin.ignore();
    while (n)
    {
        getline(cin, rawInput);
        pos = rawInput.find(' ');
        if (pos == string::npos) {
            temp = atol(rawInput.c_str());
            flag = true;
            cout << "1 Arugment: " << temp << endl;
        } else {
            flag = false;
            str1 = rawInput.substr(0, pos);
            temp = atol(str1.c_str());
            str1 = rawInput.substr(pos+1);
            temp1 = atol(str1.c_str());
            cout << "2 Argument: " << temp << " " << temp1 << endl;
        }

        // flag is true, meaning we need to find max or min
        if (flag) {
            
            if (temp == 3) {
                // find Maximum
                cout << max << endl;
            } else {
                // find Minimum
                cout << min << endl;
            }
        } else {
            if (temp == 1) {
                // insert temp1
                input.push_back(temp1);
                if (temp1 > max) max = temp1;
                if (temp1 < min) min = temp1;
            } else {
                // delete temp1 from the list
                list<unsigned long>::iterator itr = input.begin();
                for (; itr != input.end();itr++)
                {
                    if (*itr == temp1) {
                        input.erase(itr);
                        break;
                    }
                }
                if (itr == input.end()) cout << -1 << endl;
                else {
                    if (temp1 == max) max = 0;
                    else if (temp1 == min) min = 0xffffffffffffffff;

                   for(itr = input.begin(); itr != input.end(); ++itr)
                   {
                       if (*itr >max) max = *itr;
                       else if (*itr < min) min = *itr;
                   }
                }
            }
        }
        n--;
    }
}
