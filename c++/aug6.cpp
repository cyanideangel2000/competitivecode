#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct __num {
    int no, numbits;
}num;
bool myfunc(num a1, num a2)
{
    if (a1.numbits > a2.numbits) return true;
    else return false;
}

int main(void)
{
    int testcase, n, k, temp, t1;
    int i, j, m;
    string rawInput;
    vector<num> input;
    num ob;

    // read the num testcase
    cin >> testcase;
    cin.ignore();
    while (testcase)
    {
        getline(cin, rawInput, ' ');
        n = atoi(rawInput.c_str());

        cin >> k;
        temp = n;
        input.reserve(n);
        while (temp > 1)
        {
            getline(cin, rawInput, ' ');
            t1 = atoi(rawInput.c_str());

            i = 1;
            m = 0;
            while (i <= t1)
            {
                m += (t1 & i)? 1 : 0;
                i = i << 1;
            }
            ob.no = t1;
            ob.numbits = m;

            input.push_back(ob);
            temp--;
        }
        cin >> t1;
        i = 1;
        m = 0;
        while (i <= t1)
        {
            m += (t1 & i)? 1 : 0;
            i = i << 1;
        }
        ob.no = t1;
        ob.numbits = m;
        input.push_back(ob);

        // we have read all inputs
        // Lets sort based on num of bits
        sort(input.begin(), input.end(), myfunc);
        //ob = input[0];
        //cout << "\n Post Sorting: " << ob.no << " Bits: " << ob.numbits << endl;
        //ob = input[1];
        //cout << "\n Post Sorting: " << ob.no << " Bits: " << ob.numbits << endl;
        m = 0;
        for (i = 0; i < k; i++)
        {
            ob = input[i];
            m += ob.numbits;
        }
        cout << m << endl;
        input.clear();
        testcase--;
    }

    testcase--;
}
