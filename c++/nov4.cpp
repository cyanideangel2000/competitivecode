#include <iostream>

using namespace std;

int main (void)
{
    int ca, cb, cp, qa, qb, qp, j, m, count = 0;
    int *k1 = NULL, *i = NULL;

    // Get the cost of fruits
    cin >> ca >> cb >> cp;

    // Get the quantity of fruits
    cin >> qa >> qb >> qp;

    // Get the money we have
    cin >> m;

    while (m)
    {
        // Find the cheapest fruit
        if (ca < cb && ca < cp) {i = &ca; k1 = &qa;}
        else if (cb <= ca && cb <= cp) {i = &cb; k1 = &qb;}
        else {i = &cp; k1 = &qp;}

        // Check the exit condition
        if (m < *i) break;

        // current money left
        cout << "Starting: " << *i << " " << *k1 << " " << m << endl;
        j = m;
        while(j>=(*i) && *k1)
        {
            j = j - (*i);
            count++;
            *k1 = *k1 - 1;
            cout << count << " " << *i << " " << *k1 << " " << j << endl;
        }
        *i = 10000;
        m = j;
    }
    cout << count << endl;
}
