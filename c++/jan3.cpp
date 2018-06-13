#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
    
    unsigned long n, q, i, j, k, l, a;
    vector<unsigned long> num;
    vector<unsigned long>::iterator itr;
    string rawstr;

    num.reserve(60000);
    cin >> n;
    a = n;
    j = 1;
    while (a > 1)
    {
        getline(cin, rawstr, ' ');
        i = atol(rawstr.c_str());
        if (j == 1) {l = i;j++;}
        else {
            num.push_back(i * l);
            j = 1;
            l = 1;
        }
        a--;
    }
    cin >> i;
    num.push_back(i * l);

    // now read the queries
    cin >> q;
    while(q)
    {
        cin >> a;
        q--;

        l = 0;
        k = 10 * a;
        j = 1;
        // find num of trailing 0 in base a
        for(itr = num.begin(); itr != num.end(); ++itr)
        {
            if (j < k)
            {
                j = j * (*itr);
                continue;
            }

            while (j > a)
            {
                if (0 == j%a) l++;
                j /= a;
            }
        }
        
        if (!l) {
            while (j > a)
            {
                if (0 == j%a) l++;
                j /= a;
            }
        }
        cout << l << endl;
    }
    
}

