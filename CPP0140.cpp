/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e5 + 5;
void solve(){
   long long n; 
   cin >> n;
    if( n == 6|| n == 28||n == 496||n == 8128||n == 33550336||n == 8589869056||n == 137438691328)
        cout << 1 << '\n'; 
    else cout << 0 << '\n'; 
}  
int main(){
    Faster();
    int t;
    cin >> t;
    while(t--)
        solve();
}
    