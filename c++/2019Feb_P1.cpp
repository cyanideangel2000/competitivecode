// Problem:
// https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/an-easy-problem-1-47aac9ac/

#include <iostream>
#include <string>
using namespace std;

int main (void)
{
    string input;
    unsigned int h1, h2, m1, m2, x, h, m , i, j, k;

    cin >> input;
    cin >> x;
    h1 = h2 = m1 = m2 = 0;

    h1 = input[0] - '0';
    h2 = input[1] - '0';
    m1 = input[3] - '0';
    m2 = input[4] - '0';
    h = h1 * 10 + h2;
    m = m1 * 10 + m2;

    i = 0;
    do {
        k = (h/10) + (h % 10) + (m /10) + (m % 10);
        if ( (k%x) )
        {
            i++;
            if (m == 59) {m = 0; h++;} else m++;
            if (h == 24) h = 0;
        } else {cout << i; break;}
    } while (1);
}
