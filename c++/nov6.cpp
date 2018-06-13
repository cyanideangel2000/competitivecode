#include <iostream>
using namespace std;

int graph[300][300];

int main(void)
{
    int n, m, start, end;
    int i, j, k, t, cost = 0;

    // Input num cities, num edges, start location, end location
    cin >> n >> m >> start >> end;
    start--;
    end--;

    // Read the edges and make the graph
    i = m;
    while (i--)
    {
        cin >> j >> k >> t;
        graph[j-1][k-1] = t;
    }

}
