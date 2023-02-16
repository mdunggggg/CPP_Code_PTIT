/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e5 + 5;
int legendre ( int n , int p){
    int res =0;
    for ( int i = p ; i <= n ; i *= p){
        res += n / i;
    }
    return res;
}
void solve(){
    int n , p;
    cin >> n >> p;
    cout << legendre(n , p) << '\n';
}  
int main(){
    Faster();
    int t;
    cin >> t;
    while(t--)
        solve();
}
    