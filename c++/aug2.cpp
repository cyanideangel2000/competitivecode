#include <iostream>
#include <vector>
#include <bitset>
#include <algorithm>

using namespace std;

class Node
{
    public:
        int src, dst, wt;
        Node (int n, int m, int weight)
        {
            src = n;
            dst = m;
            wt = weight;
        }
};

struct myclass {
      bool operator() (const Node& i, const Node& j) { return (i.wt > j.wt);}
} myobject;


int main(void)
{
    int testcase, n, i, j, k;
    long m;
    unsigned long maxWt;
    string rawInput;
    vector<Node> input;
    Node node(0,0, 0);
    bitset<5000> nodes;
    vector<Node>::iterator itr;

    cin >> testcase;
    cin.ignore();
    while (testcase)
    {
        // read N(num vertices) and M(num edges)
        getline(cin, rawInput, ' ');
        n = atoi(rawInput.c_str());

        cin >> m;
        i = m;
        input.reserve(m);

        // now lets read the m edges
        while (i)
        {
            // get src node
            getline(cin, rawInput, ' ');
            node.src = atoi(rawInput.c_str());

            // get dst node
            getline(cin, rawInput, ' ');
            node.dst = atoi(rawInput.c_str());
            
            // get weight
            cin >> node.wt;

            input.push_back(node);
            //cout << "Edge: " << node.src << " " << node.dst << endl;
            
            i--;
        }


        // the complete graph has been read
        // Lets sort the edges based on weight
        sort(input.begin(), input.end(), myobject);

        maxWt = 0;
        itr = input.begin();
        nodes.reset();
        while ((nodes.count() < n) && (itr != input.end()))
        {
            node = *itr;
            if (!(nodes.test(node.src) && nodes.test(node.dst))) {
                maxWt += node.wt;
                nodes.set(node.src);
                nodes.set(node.dst);

                cout << "maxEdge: src, dst, weigth: " << node.src << "  " << node.dst << " " << node.wt << endl;
            }
            ++itr;
            
        }
        cout << "Ans: " << maxWt << " count: " << nodes.count() << endl;
        input.clear();
        testcase--;
    }
    return 0;
}


