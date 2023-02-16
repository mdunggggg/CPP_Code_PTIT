/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e5 + 5;

void solve(){
    int a, p, q;
    cin >> a >> p >> q;
    int d = __gcd(p, q);
    for (int i = 1; i <= d; ++i)
        cout << a;
    cout << '\n';
}  
int main(){
    Faster();
    int t;
    cin >> t;
    while(t--)
        solve();
}
    