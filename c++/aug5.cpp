#include <iostream>
#include <vector>

using namespace std;


int main(void)
{
    unsigned long n, t, i, j, k, m;
    string rawInput;
    vector<unsigned long> num;
    vector<unsigned long> per;
    vector<unsigned long> temp;

    getline(cin, rawInput, ' ');
    n = atol(rawInput.c_str());

    cin >> t;
    num.reserve(n + 1);
    per.reserve(n + 1);
    temp.reserve(n + 1);
    num.push_back(0);

    i = n;
    while (i > 1)
    {
        getline(cin, rawInput, ' ');
        m = atol(rawInput.c_str());
        num.push_back(m);
        i--;
    }
    cin >> m;
    num.push_back(m);

    i = n;
    j = 1;
    while (i > 1)
    {
        getline(cin, rawInput, ' ');
        m = atol(rawInput.c_str());
        per.push_back(m);
        i--;
        j++;
    }
    cin >> m;
    per.push_back(m);


    // We have read all inputs
    // Now lets start solving
    while(t)
    {
        i = 1;

        while (!(i>n))
        {
            j = num[i];
            num[i] = per[j];
            i++;
        }
        t--;
    }
    i = 1;
    while (!(i>n))
    {
        cout << num[i] << " ";
        i++;
    }
    cout << endl;
}

