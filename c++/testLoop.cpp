#include <iostream>
using namespace std;

static bool matrix[100][100];
int n, m, numloop;

// Api that solves the problem
#define isLoop(r1, c1, r2, c2, r3, c3, r4, c4) if ((matrix[r1][c1] == matrix[r2][c2]) && (matrix[r1][c1] == matrix[r3][c3]) && (matrix[r1][c1] == matrix[r4][c4]))
void solve (int r1, int c1, int r2, int c2, int r3, int c3, int r4, int c4)
{
    // sanity checks
    if ((r1 < 0) || (r2 < 0) || (r3 < 0) || (r4 < 0)) return;
    if ((c1 < 0) || (c2 < 0) || (c3 < 0) || (c4 < 0)) return;
    if ((r1 >= n) || (r2 >= n) || (r3 >= n) || (r4 >= n)) return;
    if ((c1 >= m) || (c2 >= m) || (c3 >= m) || (c4 >= m)) return;
    if ((r1 == r2) && (c1 == c2)) return;
    if ((r3 == r4) && (c3 == c4)) return;  
    if ((r1 == r3) && (c1 == c3)) return;
    if ((r2 == r4) && (c2 == c4)) return; 
    cout << "Called with: " << r1 << " " << c1 << " " << r2 << " " << c2 << " " << r3 << " " << c3 << " " << r4 << " " << c4 <<endl;

    isLoop(r1, c1, r2, c2, r3, c3, r4, c4)
    {
        numloop++;
        cout << "Loop at: " << r1 << " " << c1 << " " << r2 << " " << c2 << " " << r3 << " " << c3 << " " << r4 << " " << c4 <<endl;
    }
    solve (r1, c1, r2, c2+1, r3, c3+1, r4, c4);
    solve (r1, c1, r2, c2, r3+1, c3, r4+1, c4);
    solve (r1, c1+1, r2, c2, r3, c3, r4, c4+1);
    solve (r1+1, c1, r2+1, c2, r3, c3, r4, c4);
}
int main()
{
    int i, j;
    cout << endl << "Matrix Dimension\n";
    cin >> n >> m;

    // setup matrix
    for (i=0; i< n; i++)
        for (j=0; j<m; j++) cin >> matrix[i][j];


    // Current matrix is
    for (i=0; i< n; i++)
    {
        cout << endl;
        for (j=0; j<m; j++) cout << matrix[i][j] << " ";
    }

    numloop = 0;
    cout << endl;
    solve(0, 0, 0, 1, 1, 1, 1, 0);
    cout << "THe Final NUmber of Loop: " << numloop;

}
