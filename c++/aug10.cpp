#include <iostream>
#include <vector>

using namespace std;

/* function to swap array elements */

int chest[100], maxgem, gems[100];
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
    int testcase, n, m, k, j, i, keys[20];
    string rawInput;

    // read the num testcase
    cin >> testcase;
    cin.ignore();
    while (testcase)
    {
        getline(cin, rawInput, ' ');
        n = atoi(rawInput.c_str());

        getline(cin, rawInput, ' ');
        m = atoi(rawInput.c_str());

        cin >> k;

        // read keys
        j = n;
        i = 0;
        while (j > 1)
        {
            getline(cin, rawInput, ' ');
            keys[i++] = atoi(rawInput.c_str());
            j--;
        }
        cin >> j;
        keys[i] = j;
        
        // read chest
        j = m;
        i = 0;
        while (j > 1)
        {
            getline(cin, rawInput, ' ');
            chest[i++] = atoi(rawInput.c_str());
            j--;
        }
        cin >> j;
        chest[i] = j;

        upsetmin = 0x0fffffff;
        perm(v, n, 0);
        cout << upsetmin << endl;
        testcase--;
    }
}
