#include <iostream>
#include <map>
#include <utility>
#include <algorithm>
#include <vector>

using namespace std;

std::map<pair<unsigned int, unsigned int>, int> store;
std::map<pair<unsigned int, unsigned int>, int>:: iterator it;
int main (void)
{
    int testcase;
    unsigned int num, i, j, k, m;
    unsigned int count, temp;
    vector<unsigned int> input, input1;
    vector<unsigned int>:: iterator veit;

    input.reserve(10);
    input1.reserve(10);
    cin >> testcase;
    while(testcase)
    {
        cin >> num;
        input.push_back(num);
        input1.push_back(num);
        testcase--;

    }
    sort(input1.begin(), input1.end());
    veit = input1.begin();
    while (veit != input1.end())
    {
        num = *veit;
        veit++;
        for (i=2; i<=num; i++)
        {
            for (j=2; j<=num; j++)
            {
                // if both i and j are even
                // they aren't coprime
                if (((i | j) & 1) == 0) continue;

                // If both i and j are equal
                // they are't coprime
                else if (i == j) continue;
                else {
                    if (i < j) it = store.find(make_pair(i, j));
                    else it = store.find(make_pair(j, i));

                    // If the this tuple isn't there in map yet
                    // We hav no idea if they are coprime
                    // We need to calculate this
                    if (it == store.end()) {
                        temp = (i < j) ? i : j;
                        for (m=2; m <= temp; m++)
                        {
                            if (((i % m) == 0) && ((j % m) == 0)) {
                                if (i< j) store[make_pair(i, j)] = false;
                                else store[make_pair(j, i)] = false;

                                //cout << "Varun: NoCoPrime: " << i << " " << j << endl;
                                break;
                            }
                        }

                        // We have found a coprime
                        // Also from number theory we have
                        // if (a, b) are coprime then
                        // (a-b, b) are coprime
                        // (a, b-a) are coprime
                        if (m > temp) {
                            //cout << "Varun: CoPrime: " << i << " " << j << endl;
                            if (i < j) {
                                store[make_pair(i, j)] = true;
                                //store[make_pair(i, j -i)] = true;
                            } else {
                                store[make_pair(j, i)] = true;
                                //store[make_pair(i - j, j)] = true;
                            }
                        }
                    }
                }
            }
        }
    }
    veit = input.begin();
    while (veit != input.end())
    {
        num = *veit;
        count = 0;
        it = store.begin();
        while (it != store.end())
        {
            if ((it->second) && (it->first).second <= num) {
                count++;
                //cout << "CoPrime: " << (it->first).first << " " << (it->first).second << endl;
            }
            it++;
        }
        cout << (num + count) << endl;
        veit++;
    }
}
