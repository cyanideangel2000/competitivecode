#include <iostream>
#include <string>

using namespace std;

#define SWAP(i, j) {char ch = str1[i]; str1[i] = str2[j]; str2[j] = ch;}

int main(void)
{
    int n, i, j, k;
    string str1, str2;
    short num[26] = {0,};
    
    // length of string
    cin >> n;

    // source string
    cin >> str1;

    //destination string
    cin >> str2;

    for (i=0; i<n; i++)
    {
        j = str1[i] - 'a';
        num[j]++;
    }

    for (i=0; i<n; i++)
    {
        j = str2[i] - 'a';
        num[j]--;
    }
    
    //if num of characters don't match, its NO
    for (i=0;i<n; i++)
        if (num[i]) {cout "NO"; return 0;}

    // Lets try to swap logic and check
    i = 0;
    j = 0;
    while(1)
    {
        while ((i<n) && (j<n) && (str[i] == str2[j]))
        {
            i++;
            j++;
        }

        cout << i << " " << str[i] << " " << j << " " << str2[j] << endl;
        while ((i<n) && (str2[j] != str1[i]))
        {
            i++;
        }

        k = 0;
        while ((i+k < n) && (j+k < n) && (str2[j+k] == str1[i+k])) k++;
    }
}
