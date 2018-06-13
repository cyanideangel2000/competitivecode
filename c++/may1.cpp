#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main (void)
{
    int n, i, j, pos;
    cin >> n;
    vector<int> count;

    count.reserve(26);

    i = n;
    string str;
    char ch;
    while (i--)
    {
        cin >> str;
        pos = str.at(0) - 'a';
        count[pos]++;
    }

    int answer = 0;
    for (i=0; i<26; i++)
    {
        if (count[i] == 0) continue;

        //cout << "For Character: " << (char)('a' + i) << " count: " << count[i] << endl;
        if (count[i] < 11) answer++;
        else {
            while(count[i] > 10)
            {
                answer++;
                count[i] = count[i] - 10;
            }
            answer++;
        }
        //cout << "For Character: " << (char)('a' + i) << " ans: " << answer << endl;
    }
    cout << answer;
}
