#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main(void)
{
    int num, i, j, cur, pos, cost = 0;
    vector<int> ideal;
    list<int> given;
    string rawInput;

    // read the number of process
    cin >> num;
    cin.ignore();
    j = num - 1;

    // read the given order of process
    while (j)
    {
        getline(cin, rawInput, ' ');
        i = atoi(rawInput.c_str());
        given.push_back(i);
        j--;
    }
    cin >> i;
    given.push_back(i);

    // Read the ideal order of process
    j = num - 1;
    while (j)
    {
        getline(cin, rawInput, ' ');
        i = atoi(rawInput.c_str());
        ideal.push_back(i);
        j--;
    }
    cin >> i;
    ideal.push_back(i);

    // We have read all inputs
    pos = 0;
    while (pos < num)
    {
        // What is ideal process at the pos location
        cur = ideal[pos];

        // So the front element in given order, isn't same as ideal
        j = given.front();
        //cout << "Current: Ideal: " << cur << " Given: " << j << endl;
        if (j != cur) {
            cost++;
            given.push_back(j);
            given.pop_front();
        } else {
            cost++;
            pos++;
            given.pop_front();
        }
    }
    cout << cost << endl;
}
