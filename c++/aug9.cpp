#include <iostream>
#include <vector>

using namespace std;

/* function to swap array elements */

int per1[12], p[12], upsetmin = 0x0fffffff;
inline void swap (int v[], int i, int j)
{
    int t;

    t = v[i];
    v[i] = v[j];
    v[j] = t;
}

/* recursive function to generate permutations */
void perm (int v[], int n, int i)
{

    /* this function generates the permutations of the array
     *   * from element i to element n-1
     *       */
    int j, upset;

    /* if we are at the end of the array, we have one permutation
     *   * we can use (here we print it; you could as easily hand the
     *       * array off to some other function that uses it for something
     *           */
    if (i == n) {
        // cout << "We got one permutation: ";
        // for (j=0; j<n; j++) cout << v[j] << " ";
        // cout << endl;

        // lets calcluate the upset
        upset = 0;
        for (j=2; j<n; j++)
        {
            upset = upset + (v[j-2] ^ v[j-1] ^ v[j]) * p[j]; 
        }
        // cout << "Current upset: " << upset << " UpsetMin: " << upsetmin << endl;
        if (upset < upsetmin) {
            upsetmin = upset;
            for (j=0; j<n; j++) per1[j] = v[j];
        }
    } else
        /* recursively explore the permutations starting
         *       * at index i going through index n-1
         *               */
        for (j=i; j<n; j++) {

            /* try the array with i and j switched */

            swap (v, i, j);
            perm (v, n, i+1);

            /* swap them back the way they were */

            swap (v, i, j);
        }
}

int main(void)
{
    int testcase, n, j, i, v[12];
    string rawInput;

    // read the num testcase
    cin >> testcase;
    cin.ignore();
    while (testcase)
    {
        cin >> n;

        j = n;
        i = 0;
        while (j > 1)
        {
            getline(cin, rawInput, ' ');
            v[i++] = atol(rawInput.c_str());
            j--;
        }
        cin >> j;
        v[i] = j;
        
        // read p
        j = n;
        i = 0;
        while (j > 1)
        {
            getline(cin, rawInput, ' ');
            p[i++] = atol(rawInput.c_str());
            j--;
        }
        cin >> j;
        p[i] = j;

        upsetmin = 0x0fffffff;
        perm(v, n, 0);
        cout << upsetmin << endl;
        testcase--;
    }
}
