// The problem statement
// https://www.hackerearth.com/practice/data-structures/inputs/1-d/practice-problems/algorithm/large-sub-inputs-5bd8005b/

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    unsigned long i, j, k, k1, k2, n, m, s1, a1, testcase, count;
    vector<unsigned long> input;

    cin >> testcase;
    while(testcase--)
    {
        cin >> n >> m >> k;
        input.clear();
        input.reserve(n);

        // read the numbers
        for (i=0; i<n; i++)
        {
            cin >> a1;
            input[i] = a1;
        }

        // set the sum = 0
        s1 = 0;

        // set the count = 0
        count = 0;

        // B input, M times of A
        for (i=0; i< (n * m); i++)
        {
            j = i - (loop * n);
        }
}
