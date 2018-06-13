#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

class node {
    private:
    int vertex, color;

    public:
    node(int v1, int c1) : vertex(v1), color(c1)
    {}

    int iscolorset()
    {
        return color;
    }

    void colorset(int c)
    {
        color = c;
    }

    int connectednode()
    {
        return vertex;
    }
};

int main(void)
{
    int testcase, n, u1, u2, v1, v2, sum;
    vector<int> color;
    vector<list<node> >tree;
    list<node> temp, temp2;

    cin >> testcase;
    while (testcase--)
    {
        sum = 0;
        color.clear();
        tree.clear();

        cin >> n;

        color.reserve(n);
        tree.reserve(n);
        u1 = 1;
        while (u1 != (n-1))
        {
            scanf("%d", &u2);
            color.push_back(u2);
            u1++;
        }

        u1 = 1;
        while (u1 != (n-1))
        {
            scanf("%d %d", &v1, &v2);
            temp = tree[v1];
            temp.push_back(node(v2, 0));
            temp = tree[v2];
            temp.push_back(node(v1, 0));
            u1--;
        }
        
        // We will follow greedy algorithm
        // Lets sort the colors in decreasing order
        
        sort(color.begin(), color.end());
        list<int> ::iterator itrl1;
        list<int> ::iterator itrl2;
        for (u1=1; u1<=n; u1++)
        {
            itrl1 = tree[u1].begin();
            u2 = 0;
            while (itrl1 != tree[u1].end())
            {
                v1 = itrl1->iscolorset();
                if (v1)
                {
                    while (color[u1] != v1) u1++;
                    u1++;
                } 
                else 
                {
                    // lets pick the least color here
                    itrl1->colorset(color[u2]);

                    // Also we need to update the other node
                    itrl2 = tree[itrl1->connectednode()].begin();
                    while (itrl2 != tree[itrl1->connectednode()].end())
                    {
                        if (itrl2->connectednode() == u1)
                            itrl2->colorset(color[u2]);
                        itrl2++;
                    }
                    u2++;
                }
                itrl1++;
            }
        }
    }
}
