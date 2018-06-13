#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main(void)
{
    int testcase;
    int n, i, j, k, count;
    vector<unsigned int> book;
    string raw;

    cin >> testcase;
    while(testcase--)
    {
        k = 0;
        count = 0;
        cin >> n;
        i = n;
        book.reserve(n);
        while(i>1)
        {
            getline(cin, raw, ' ');
            book.push_back(atoi(raw.c_str()));
            if (!k) k = book[0];
            else if (k > book[n-i]) k = book[n-i];
            i--;
        }
        cin >> i;
        book.push_back(i);
        if (k>i) k = i;

        vector<unsigned int>::iterator itr = book.begin();
        for(;itr != book.end(); ++itr)
        {
            count += (*itr-1);
        }
        cout << (k-1) << " " << count << endl;
        book.clear();
    }

}
