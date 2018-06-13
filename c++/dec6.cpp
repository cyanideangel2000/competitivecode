#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>

using namespace std;
int main(void)
{
    int i = 0, j, k;
    char ch;
    vector <char> input;
    while (1)
    {
        scanf("%c", &ch);
        if (ch == ' ') break;

        input.push_back(ch);
        i++;
    }
    cin >> k;

    cout << "Len: " << i << " K: " << k << endl;
    for (j = 0;  k && j<=i ; j++)
    {
        if (input.at(j) != '9') {input[j] = '9';k--;}
    }
    
    for (j=0; j<=i; j++) cout << input[j];
    cout << endl;
}
