//Florance
#include <bits/stdc++.h>
using namespace std;

signed main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l = s.length();
    for(int i = 0; i < l; i++) {
        int a = (s[i] - n) % 128;
        cout << char(a);
    }
    return 0;
}