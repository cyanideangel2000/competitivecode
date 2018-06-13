#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int testcase, n, f, p, count, i;
    string rawInput;
    vector<int> food;

    cin >> testcase;
    cin.ignore();
    food.reserve(100000);
    while (testcase)
    {
        // num of ponds
        cin >> n;
        while(n)
        {
            getline(cin, rawInput, ' ');
            f = atoi(rawInput.c_str());
            cin >> p;
            f--;
            p--;

            // we got the food type and pokeman type
            // if foodtype and poketype are same we are good, just read again
            if (p != f) {

                food[f] = food[f] + 1;
                food[p] = food[p] - 1;
                cout << "Food: " << (f+1) << " " << food[f] << " Poke: " << (p+1) << " " << food[p] << endl;
            }
            n--;
        }

        count = 0;
        for (i =0; i < 100000; i++)
        {
            if (food[i]  < 0) {
                cout << "Food for: " << (i+1) << " : " << food[i] << endl;
                count = count + food[i] * -1;
            }
            food[i] = 0;
        }
        cout << count << endl;
        testcase--;
    }
    return 0;
}
