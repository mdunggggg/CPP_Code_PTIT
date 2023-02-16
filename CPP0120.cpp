/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

void solve(){
    int m, n, a, b;
    cin >> m >> n >> a >> b;
    int d = 0;
    for (int i = m; i <= n; ++i) {
        if (i % a == 0 || i % b == 0)
            d++;
    }
    cout << d << '\n';
}  
int main(){
    Faster();
    int t;
    cin >> t;
    while(t--)
        solve();
}
    
