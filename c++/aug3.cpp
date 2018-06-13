#include <iostream>
#include <vector>
#include <bitset>
#include <algorithm>

using namespace std;

class Node
{
    public:
        int src, dst;
        unsigned long wt;
        Node (int n, int m, unsigned long weight)
        {
            src = n;
            dst = m;
            wt = weight;
        }
};

struct myclass {
      bool operator() (const Node& i, const Node& j) { return (i.wt < j.wt);}
} myobject;


int main(void)
{
    int testcase;
    unsigned long i, j, k, n, m, c, mm = 1000000007;
    string rawInput;
    vector<Node> input;
    Node node(0, 0, 0);
    bitset<1500> nodes;
    vector<Node>::iterator itr;

    cin >> testcase;
    cin.ignore();
    while (testcase)
    {
        // read N(num vertices) and M(num edges)
        getline(cin, rawInput, ' ');
        n = atol(rawInput.c_str());

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
            cout << "Edge: " << node.src << " " << node.dst << " " << node.wt << endl;
            
            i--;
        }


        // the complete graph has been read
        // Lets sort the edges based on weight
        sort(input.begin(), input.end(), myobject);

        // Lets find the MST here
        i = 1;
        itr = input.begin();
        while (itr != input.end())
        {
            node = *itr;

            // lets pick the edge with least weight
            cout << "PickingEdge: " << node.src << " " << node.dst << " " << node.wt << endl;
            nodes.set(node.src);
            nodes.set(node.dst);
            
            i = (i * node.wt) % mm;

            if (nodes.count() == n) {cout << "FOUND" << endl; break;}
            ++itr;
        }
        cout << i << endl;
        nodes.reset();
        input.clear();
        testcase--;
    }
    return 0;
}

