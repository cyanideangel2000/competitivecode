#include <iostream>
#include <vector>
#include <bitset>
using namespace std;


bitset<100000000> moody;
unsigned int current, nexcur;
vector <unsigned long int> input;

bool isMoody (unsigned long int num)
{
    unsigned long int sum, temp, count = 0;
    bool flag = false, temp1 = false;
    do {
        sum = 0;
        if (num <= current) {
            temp1 = moody.test(num);

            // We can update our bitset to store more data
            if (flag) {
                if (temp1) moody.set(current + 1);
                current++;
            }
            return temp1;
        }
        if (!flag || (num == (1 + current))) flag = true;
        num = num * num;
        while (num) {
            temp = num;
            num /= 10;
            sum += (temp - num * 10);
        }
        count++;
        num = sum;
    } while (count < 100);
    return false;
}

int main(void)
{
    int testcase;

    unsigned long num;
    moody.set(1); // 1
    moody.set(2); // 2
    moody.set(4); // 4
    moody.set(8); // 8
    moody.set(10); // 10
    moody.set(17); // 17
    moody.set(19); // 19
    moody.set(20); // 20 
    current = 20;

    cin >> testcase;
    cin.ignore();

    while(testcase) {
        testcase--;

        cin >> num;
        cin.ignore();
        input.push_back(num);
    }

    for (testcase = 0; testcase < input.size(); ++testcase) {
        if (isMoody(input.at(testcase)))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    cout << "Current: " << current << endl;
}
