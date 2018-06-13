#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

class Node
{
    public:
        int src, dst;
        Node (int n, int m)
        {
            src = n;
            dst = m;
        }
};

int main(void)
{
    int testcase, n, m, i, j, k;
    string rawInput;
    vector<Node> input;
    Node node(0,0);
    bitset<5000> nodes;

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
        nodes.reset();

        // now lets read the m edges
        while (i)
        {
            getline(cin, rawInput, ' ');
            node.src = atoi(rawInput.c_str());
            cin >> node.dst;
            input.push_back(node);
            //cout << "Edge: " << node.src << " " << node.dst << endl;
            i--;
        }


        // We have read the complete graph
        // Now, lets read the list of vertices
        i = n - 1;
        while (i > 1)
        {
            i--;

            getline(cin, rawInput, ' ');
            j = atoi(rawInput.c_str());

            // We have read an edge from the graph
            // Lets mark the vertices it touches as Visited.
            node = input[j-1];
            nodes.set(node.dst);
            nodes.set(node.src);
            //cout << "Var: Read Edge: " << j << " Src  Dst: " << node.src << " " << node.dst << " " << nodes.to_string() << endl;
        }
        cin >> j;
        node = input[j-1];
        nodes.set(node.dst);
        nodes.set(node.src);
        //cout << "Var: Read Edge: " << j << " Src  Dst: " << node.src << " " << node.dst << " " << nodes.to_string() << endl;

        if (nodes.count() == n) cout << "YES" << endl;
        else cout << "NO" << endl;

        input.clear();
        testcase--;
    }
    return 0;
}
