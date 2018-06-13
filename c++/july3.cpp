#include <iostream>
#include <bitset>
using namespace std;

int main(void)
{
    int testcase, n, m, sum1 = 0, sum2 = 0;
    string rawInput;
    bitset<10> key;

    cin >> testcase;
    cin.ignore();
    while (testcase)
    {
        key.reset();

        // num of numbers
        cin >> n;
        sum2 = 0;
        while(n > 1)
        {
            getline(cin, rawInput, ' ');
            m = atoi(rawInput.c_str());
            m = m % 10;
            if (key.test(m)) sum2++;
            else key.set(m);
            n--;
            //cout << "M: " << m << "Bitset: " << key.to_string() << endl;
        }
        cin >> m;
        m = m % 10;

        if (key.test(m)) sum2++;
        else key.set(m);
        //cout << "M: " << m << "Bitset: " << key.to_string() << endl;
        cout << sum2 << endl;
        testcase--;
    }
}
