#include <iostream>
#include <vector>

using namespace std;
class xy {
    private:
        unsigned int x1, x2;
        bool flag;
    public:
        xy(unsigned x3, unsigned x4) 
            : x1(x3)
            , x2(x4)
            , flag(false)
        {}
        is_used (void)
        {
            return flag;
        }
        set_used (void)
        {
            flag = true;
        }
        set_unused ()
        {
            flag = false;
        }
        length ()
        {
            return (x2 - x1);
        }
        end()
        {
            return x2;
        }
};

vector<xy> store;
int main(void)
{
    int testcase;
    unsigned int n, l, l1, i, j, k;

    cin >> testcase;
    while(testcase)
    {
        cin >> n >> l;
        while (i > 0)
        {
            i--;
            cin >> j >> k;
            store.push_back(xy(j, k));
        }
        vector<xy> :: iterator itr = store.begin();
        vector<xy> :: iterator itr1;
        for(; itr!=store.end(); ++itr)
        {
            itr->set_used();

            itr1 = store.begin();
            l1 = l - itr->length()
            while ((itr1 != store.end()) || (l1 > 0))
            {
                if (!itr1->is_used() && (end == itr1->start())) {
                    l1 = l1 - itr1->lenth();
                    itr1->set_used();
                }
                itr1++;
            }

        }
        testcase--;
    }
}
