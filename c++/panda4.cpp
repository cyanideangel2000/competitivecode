#include <iostream>
#include <vector>
using namespace std;

vector<char> padantic;
unsigned long power[] = {0, 1, 4, 9, 16, 25, 36, 49, 64, 81}; 
void is_padantic(unsigned long n)
{
    //cout << __FUNCTION__ << " " << n << endl;
    if (padantic[n] != 'n') return;

    // If we come here, means we don't know yet if this number is padantic or not
    unsigned long n1, n2 = n;
    long t1;
    while(n)
    {
        n1 = n;
        n = n / 10;
        t1 = n2 - power[n1 - (n * 10)];

        //cout << n << " " << n1 << " " << t1 << endl;

        // Not padantic
        if (t1 < 0) {
            if (n1 < 10) padantic[n2] = 'f';
        } else if (t1 > 0) {
            if (padantic[t1] == 'n')
                if (t1 != n1) {
                    is_padantic(t1);
                    padantic[n2] = padantic[t1];
                    //cout << "Ret1: " << t1 << " " << n2 <<" Res: " << padantic[t1] << endl;
                    return;
                } else {}
            else {padantic[n1] = padantic[t1]; return;}
        }
    }
}


int main (void)
{
    unsigned long testcase, n, i, temp, temp1;
    string rawInput;

    cin >> testcase;
    cin.ignore();

    padantic.reserve(100005);

    // Initialize from 0-9
    padantic.push_back('f');
    padantic.push_back('t');
    padantic.push_back('f');
    padantic.push_back('f');
    padantic.push_back('t');
    padantic.push_back('f');
    padantic.push_back('f');
    padantic.push_back('f');
    padantic.push_back('f');
    padantic.push_back('f');
    for (i=10; i<100005; i++) padantic.push_back('n');
    padantic[10] = 'f';
    padantic[100] = 'f';
    padantic[1000] = 'f';
    padantic[10000] = 'f';
    padantic[100000] = 'f';

    while (testcase > 0)
    {

        cin >> n;
        cin.ignore();
        if (0 == (n%100)) padantic[n] = 'f';

        // Find if padantic
        is_padantic(n);

        // Print the result
        cout << ((padantic[n] == 't') ? "Yes" : "No") << endl;
        testcase--;
    }
    return 0;
}
