/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
long long ans = 0;
void solve(string s) {
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '-') continue;
        if (s[i] < '0' || s[i] > '9') return;
    }

    bool isNeg = 0;
    if (s[0] == '-') {
        s.erase(0, 1);
        isNeg = 1;
    }
    if (s.length() > 10) return;
    long long num = 0;
    for (int i = 0; i < s.length(); ++i) {
        num = num * 10 + (s[i] - '0');
    }
    if (isNeg) num = -num;
    if (num >= INT_MIN && num <= INT_MAX) ans += num;
}

void Process(){
    ifstream fi;
    fi.open("DATA.in");

    string s;
    while (fi >> s) {
        solve(s);
    }
    cout << ans;
}
int main(){
    Faster();
        Process();
}
    