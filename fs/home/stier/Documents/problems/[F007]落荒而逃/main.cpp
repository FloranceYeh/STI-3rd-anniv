//Florance
#include <bits/stdc++.h>
using namespace std;

int a[110][110];
int b[110][110];

signed main() {
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++) {
        a[1][i] == 1 ? b[1][i] = 0 : b[1][i] = 1;
    }
    for(int j = 1; j <= m; j++) {
        a[j][1] == 1 ? b[j][1] = 0 : b[j][1] = 1;
    }
    for(int i = 2; i <= n; i++) {
        for(int j = 2; j <= m; j++) {
            if(a[i][j] == 1) b[i][j] = 0;
            else b[i][j] = b[i - 1][j] + b[i][j - 1];
        }
    }
    // for(int i = 1; i <= n; i++) {
        // for(int j = 1; j <= m; j++) {
            // cout << b[i][j] << ' ';
        // }
        // cout << '\n';
    // }
    if(b[n][m] == 0) cout << "NO!!!";
    else cout << b[n][m];
    return 0;
}