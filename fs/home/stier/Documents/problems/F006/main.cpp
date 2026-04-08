//Florance
#include <bits/stdc++.h>
using namespace std;

signed main() {
    int n;
    cin >> n;
    int ans = 0;
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        char o;
        int x;
        cin >> o >> x;
        if(o == 'D') {
            sum += x;
        }
        if(o == 'R') {
            sum -= x;
        }
        ans = max(ans, -sum);
    }
    cout << ans;
    return 0;
}