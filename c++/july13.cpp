#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

unsigned short matrix[100][100];
int memory[100][100];
int n, m, k, maxorb;
void maxorbs(int r, int c, int orb)
{
    cout << "Invoking with " << r << " " << c << " " << orb << " " << maxorb << endl;
    // return if we cross the boundary
    if (r >= n || c >= m) return;

    // Exploded already
    if (orb > k) {
        return;
    }

    // We have reached destination
    if ((r==(n-1)) && (c==(m-1))) {
        memory[r][c] = orb;
        if (orb == k) {
            maxorb = k;
            cout << "Found the optimum route" << endl;
        } else if (orb > maxorb) {
            maxorb = orb;
            cout << "Reached destination: " << orb << endl;
        }
        return;
    }

    // check if we already know, what's the max until now
    if (memory[r][c] > 0) {
        orb = orb + memory[r][c];
        if ((orb > maxorb) && (orb <= k)) maxorb = orb;
        return;
    } else {
        orb = orb + matrix[r][c];

        // Only if we know we not going to explode
        if (orb <= k) {
            maxorbs(r, c+1, orb);
            memory[r][c+1] = maxorb;

            maxorbs(r+1, c+1, orb);
            memory[r+1][c+1] = maxorb;

            maxorbs(r+1, c, orb);
            memory[r+1][c] = maxorb;
        }
    }
    return;
}

int main (void)
{
    int testcase;
    int i, j, l;

    cin >> testcase;
    while(testcase--)
    {
        cin >> n >> m >> k;
        for (i=0;i<n;i++)
        {
            for (j=0;j<m; j++)
            {
                scanf("%d", &l);
                matrix[i][j] = l;
            }
        }
        memset(memory, 0x0, sizeof(memory));
        maxorb = 0;
        maxorbs(0, 0, 0);
        if (maxorb > 0)
            cout << maxorb << endl;
        else
            cout << -1 << endl;
    }
}
