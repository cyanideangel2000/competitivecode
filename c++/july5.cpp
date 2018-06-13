#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct __name {
    unsigned long number;
    unsigned long numset;
}name;

bool myfunc(name ob1, name ob2)
{
    if (ob1.numset < ob2.numset) return true;
    else return false;
}

int main(void)
{
    int testcase, n, i;
    unsigned long m, count;
    string rawInput;
    vector<name> num;
    name ob;

    cin >> testcase;
    cin.ignore();
    while (testcase)
    {
        // num of numbers
        cin >> n;
        num.reserve(n);
        while(n > 1)
        {
            getline(cin, rawInput, ' ');
            ob.number = atol(rawInput.c_str());

            // number of bits set
            ob.numset = 0;
            for (i=0; i<(sizeof(m) * 8); i++)
            {
                if (ob.number & ((unsigned long)1 << i)) ob.numset++;
            }

            //cout << "For :" << ob.number << " setbits: " << ob.numset << endl;
            num.push_back(ob);
            n--;
        }
        cin >> ob.number;
        ob.numset = 0;
        for (i=0; i<(sizeof(m) * 8); i++)
        {
            if (ob.number & ((unsigned long)1 << i)) ob.numset++;
        }
        //cout << "For :" << ob.number << " setbits: " << ob.numset << endl;
        num.push_back(ob);

        // lets sort the vector num
        sort(num.begin(), num.end(), myfunc);
        for (vector<name>::iterator itr = num.begin(); itr != num.end(); itr++)
        {
            ob = *itr;
            cout << ob.number << " ";
        }
        cout << endl;
        testcase--;
        num.clear();
    }
    return 0;
}
