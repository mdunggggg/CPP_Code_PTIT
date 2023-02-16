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
     long long n ;
     cin >> n ;
     if ( binary_search( f , f + 92 , n)) cout << "YES\n";
     else cout << "NO\n";
}  
int main(){
    Faster();
    f[0] = 0;
    f[1] = f[2] = 1;
    for ( int i = 3 ; i <= 92 ; i++) f[i] = f[i-1] + f[i-2];
    int t;
    cin >> t;
    while(t--)
        solve();
}
    