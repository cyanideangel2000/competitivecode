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
      bool operator() (const Node& i, const Node& j) { return (i.wt > j.wt);}
} myobject;


int main(void)
{
    int testcase;
    unsigned long i, j, k, n, m, c, mm = 1000000007;
    string rawInput;
    vector<Node> input;
    Node node(0, 0, 0);
    bitset<1500> nodes;
    unsigned char adjmat[1500][1500];
    vector<Node>::iterator itr, itr2;
    vector<nodes> graph;

    cin >> testcase;
    cin.ignore();
    while (testcase)
    {
        memset(adjmat, 0x0, sizeof(adjmat));

        // read N(num vertices) and M(num edges)
        getline(cin, rawInput, ' ');
        n = atol(rawInput.c_str());

        cin >> m;
        i = m;
        input.reserve(m);
        graph.reserve(n);

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

            // create the graph parallely
            graph[node.src - 1].set(node.dst);
            graph[node.dst - 1].set(node.src);
            i--;
        }

        // the complete graph has been read
        // Lets sort the edges based on weight
        // Sorting is ind escending order
        sort(input.begin(), input.end(), myobject);

        // Now we will get greedy and 1 by 1 will remove the expenvise edges
        itr = input.begin();
        testcase--;
        input.clear();
        graph.clear();
    }
}

