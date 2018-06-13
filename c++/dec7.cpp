#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string input;
    char c;
    int i, j, k, p, z, pos;

    // Read the inputs
    cin >> input >> c >> p;

    z = 0;
    for (i=0; i < input.length(); i++)
    {
        k = 0;
        j = 0;
        while (k < p)
        {
            if (input[i + k] == c) j++;
            k++;
        }

        cout << "At pos: " << i << " count: " << j
             << " maxuntilnow: " << z << endl;

        if (j >= z) {z = j, pos = i;}
    }

    cout << "MaxZ: " << z << " at post: " << pos << endl;

    // If we already have maximum in current string
    if (z == p) {
        cout << -1 << endl;
        return 0;
    }
    if (pos == 0) cout << 0 << endl;
    else
    {
        k = 0;
        j = 0;
        for (i=pos; k<p; k++)
        {
            if (input[i+k] == c) continue;
            j = (i + k);
        }
        cout << j << endl;
    }
}
