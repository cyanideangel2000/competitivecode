#include <iostream>
#include <stack>


using namespace std;
stack<int> stk;

void sort(int num)
{
    stack<int> stk1, stk2;
    int prevmin, min, temp;

    cout << "Starting with Sort" << endl;
    while (num)
    {
        min = 999999;
        while(!stk.empty())
        {
            temp = stk.top();
            stk.pop();
            if (temp == prevmin) continue;
            else if (min > temp) min = temp;
            stk1.push(temp);
        }
        stk2.push(min);
        prevmin = min;
        num--;
        cout << "Min: " << min << " Num: " << num << endl;

        if (num == 0) break;

        min = 999999;
        while(!stk1.empty())
        {
            temp = stk1.top();
            stk1.pop();
            if (temp == prevmin) continue;
            else if (min > temp) min = temp;
            stk.push(temp);
        }
        stk2.push(min);
        prevmin = min;
        num--;
        cout << "Min: " << min << " Num: " << num << endl;
    }

    while (!stk2.empty())
    {
        stk.push(stk2.top());
        stk2.pop();
    }
}

int main (void)
{
    int n, i, a;
    cout << "NumElement in Stack: ";
    cin >> n;

    for (i=0; i<n; i++)
    {
        cout << endl << "Num: ";
        cin >> a;
        stk.push(a);
    }
    
    sort(n);

    cout << "After Sorting: " << endl;
    while (!stk.empty())
    {
        cout << stk.top() << endl;
        stk.pop();
    }


}
