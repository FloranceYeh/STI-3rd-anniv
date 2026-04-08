#include <bits/stdc++.h>
using namespace std;

int md[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int gety(string s) {
    int y = 0;
    y += (s[0] ^ 48) * 1000;
    y += (s[1] ^ 48) * 100;
    y += (s[2] ^ 48) * 10;
    y += (s[3] ^ 48) * 1;
    return y;
}

int getm(string s) {
    int m = 0;
    m += (s[5] ^ 48) * 10;
    m += (s[6] ^ 48) * 1;
    return m;
}

int getd(string s) {
    int d = 0;
    d += (s[8] ^ 48) *10;
    d += (s[9] ^ 48) *1;
    return d;
}

bool isly(int x) {
    if((x % 100 != 0 && x % 4 == 0) || x % 400 == 0) {
        return true;
    }
    else return false;
}

int getdays(int y, int m, int d) {
    int days = 0;
    for(int i = 2024; i <= y; i++) {
        if(isly(i - 1)) days += 366;
        else days += 365;
    }
    for(int i = 7; i <= m; i++) {
        if(i == 3 && isly(y)) days += 29;
        else days += md[i - 1];
    }
    days += d - 5;
    return days;
}

void weeks(int days) {
    int d = 0;
    int ans = 0;
    while(d < days) {
        d += 7;
        if(d >= days) {
            cout << ans;
            return;
        }
        ans += 1;
    }
}

signed main() {
    string s;
    cin >> s;
    int y = gety(s);
    int m = getm(s);
    int d = getd(s);
    int days = getdays(y, m, d) + 1;
    //cout << days - 1 << endl;
    weeks(days);
    return 0;
}