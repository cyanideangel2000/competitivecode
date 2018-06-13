#include <iostream>
#include <vector>
#include <string>

using namespace std;
class fan
{
    int t_;
    string name_;

    public:
    fan(string name, int t) : name_(name)
                            , t_(t)
    {}
    int getT()
    {
        return t_;
    }
    string getN()
    {
        return name_;
    }
};

bool sortfunction(fan &a, fan &b)
{
    if (a.getT() < b.getT()) return true;
    if (a.getT() == b.getT())
    {
        cout << a.getN() << " " << b.getN() << " " << (a.getN() > b.getN()) << endl;
        if (a.getN() > b.getN()) return true;
    }

    return false;
}

int main(void)
{
    int n, t, i, j, k;
    string name;

    cin >> n >> t;
    vector<fan> store;
    store.reserve(n);

    i = n;
    while(i--)
    {
        cin >> name >> j;
        store.push_back(fan(name, j));
    }
    sort (store.begin(), store.end(), sortfunction);
    vector<fan>::iterator itr = store.end();
    itr--;
    while (t--)
    {
        cout << itr->getN()<< endl;
        itr--;
    }
}
