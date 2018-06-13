#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
    unsigned int testcase, a1, a2, a3, a4;
    unsigned int array[10] = {0, 1, 4, 9, 16, 25, 36, 49, 64, 81};
    vector<unsigned int> store;
    string raw;
    bool flag;
    
    cin >> testcase;
    store.reserve(1000000);
    while(testcase)
    {
        getline(cin, raw, ' ');
        a1 = atoi(raw.c_str());
        cin >> a2;

        flag = false;
        while (a2)
        {
            a3 = 0;
            a4 = 0;
            if (a1 < 1000000) {
                if (store[a1]) a4 = store[a1];
                if ((1 == a2) && a4) break;
                else {
                    a4 = a1; flag = true;
                }
            } else flag = true;

            while (flag && a1)
            {
                a3 = a3 + array[a1 % 10];
                a1 = a1 / 10;
            }

            if (1000000 > a4) store[a4] = a3;
            a4 = a3;
            a1 = a3;
            a2--;
        }
        cout <<  a4 << endl;
        testcase--;
    }
}
