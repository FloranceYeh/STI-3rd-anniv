#include <bits/stdc++.h>
using namespace std;

string dic[4] = {"B","KiB","MiB","GiB"};

int main(){
    int n;
    cin >> n;
    double ans = 0;
    for(int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        ans += x;
    }
    int cnt = 0;
    while(ans >= 1024) {
        ans /= 1024;
        cnt += 1;
    }
    printf("%.2f", ans);
    cout << dic[cnt];
    return 0;
}