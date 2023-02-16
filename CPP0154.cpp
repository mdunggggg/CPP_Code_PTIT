/*  Hoang Manh Dung - D21 ProPTIT  */

#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e5 + 5;
long long f[93];
void solve(){
    int n ; 
    cin >> n ;
    long long k ; cin >> k ;
    int res = 0;
    for ( int i = 1 ; i <= n ; i++) res += i % k;
    ( res == k ) ? cout << "1\n" : cout << "0\n"; 
}  
int main(){
    Faster();
    int t;
    cin >> t;
    while(t--)
        solve();
}
    