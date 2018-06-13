#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main(){
    int t, i, j;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int R;
        int C;
        cin >> R >> C;
        vector<string> G(R);
        for(int G_i = 0;G_i < R;G_i++){
            cin >> G[G_i];
        }
        int r;
        int c;
        cin >> r >> c;
        vector<string> P(r);
        for(int P_i = 0;P_i < r;P_i++){
            cin >> P[P_i];
        }
        size_t found;
        j = 0;
        for (i = 0; i< R; i++) {
            found = G[i].find(P[j]);
            if (found == string::npos) continue;
            else {
                int l = i;
                while((j < r) && (G[l].find(P[j]) != string::npos)) {
                    l++; j++;
                }
                if (j == r) {
                    cout << "YES i: " << i << endl;
                    break;
                }
                else j = 0; 
            }
        }
        if (i == R) cout << "NO" << endl;
    }
    return 0;
}

