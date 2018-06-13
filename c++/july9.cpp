#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool comp (unsigned long i, unsigned long j)
{
    if (i > j) return true;
    else return false;
}

int main(void)
{
    unsigned long n, m, temp, sum;
    string rawInput;
    vector<unsigned long> input;
    vector<unsigned long>::iterator itr;

    getline(cin, rawInput, ' ');
    n = atol(rawInput.c_str());
    cin >> m;
    cin.ignore();
    input.reserve(n);
    while (n > 1)
    {
        getline(cin, rawInput, ' ');
        temp = atol(rawInput.c_str());
        input.push_back(temp);
        n--;
    }
    cin >> temp;
    input.push_back(temp);

    // lets sort the given input
    sort(input.begin(), input.end(), comp);
    sum = 0;
    temp = input[0];
    cout << "Max Element: " << input[0] << " " << input[1] << endl;
    while(m && input.size())
    {
        cout << "M: " << m << " temp: " << temp << endl;
        m--;
        sum = sum + temp;
        temp = temp - 1;

        if (temp >= input[1]) continue;
        else {
            // We got new Max, and we need to fit the current pending seat correctly
            itr = input.begin();

            // remove the top element, this was the max until now
            input.erase(itr);

            for (itr=input.begin(); itr != input.end(); ++itr)
            {
                if (temp > *itr) {
                    --itr;
                    input.insert(itr, temp);
                    cout << "Inserted: " << temp << " " << endl;
                    break;
                } else continue;
            }
            temp = input[0];
        }
    }
    cout << sum << endl;
}
