// Problem Link:
// https://www.hackerearth.com/problem/algorithm/medium-sum-set-problem-87d1fd46/

#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main(void)
{
    unsigned long n, m, ai, i, j;

    vector<unsigned int> a, c;
    map<int, bool> b, c1;
    map<int, bool>::iterator it, it1;

    // Read A
    cin >> n;
    for (i=0; i< n; i++) {cin >> ai; a.push_back(ai);}

    // Read C
    cin >> m ;
    for (i=0; i< m; i++) {cin >> ai; c.push_back(ai);}

    for (i=0; i<m; i++)
    {
        // create a map for C for quick search later
        c1[c[i]] = true;

        // loop through A, and get all elements possible for B
        for (j=0; j<n; j++) b[c[i] - a[j]] = true;
    }

    // b has all possible elements that B can possibly have
    // Now we take elements of A, add them to B, and check if they are in C
    for (it1 = b.begin(); it1 != b.end() && it1->second; ++it1)
    {
        for (j=0; j<n; j++)
        {
                it = c1.find(it1->first + a[j]);

                // if we don't find the
                if (it == c1.end()) {
                    it1->second = false;
                    cout << "Reject: " << it1->first << endl;
                }
        }
    }

    for (it1 = b.begin(); it1 != b.end(); ++it1)
    {
        if (it1->second)
            cout << it1->first << " ";
    }
}
