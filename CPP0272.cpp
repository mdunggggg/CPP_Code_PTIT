/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
long long PowMod( long long a , long long b){
    long long res = 1;
    while(b){
        if(b&1){
            res *= a;
            res %= MOD;
        }
        a *= a;
        a %= MOD;
        b /= 2;
    }
    return res;
}
void Process(){
    int n; cin >> n;
    int a[n];
    long long h_x , g_x;
    for ( int &x : a) cin >> x;
    for ( int i = 0 ; i < n ; i++){
        if ( i == 0){
            h_x = g_x = a[i];
            continue;
        }
        h_x = ((h_x % MOD) * (a[i] % MOD)) % MOD;
        g_x = __gcd(g_x, 1ll*a[i]);
    }
    cout << PowMod(h_x, g_x) << '\n';
    
}  
int main(){
   Faster();
    int t;
    cin >> t;
    while(t--)
        Process();
}
    