/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n; cin >> n ;
    int a[n];
    for ( int i = 0 ; i < n ; ++i){
        cin >> a[i];
    }
    int f[n];
    f[n-1] = a[n-1];
    for ( int i = n - 2 ; i >= 0 ; --i){
        f[i] = max(a[i], f[i+1]);
    }
    int res = 0;
    for ( int i = 0 ; i < n ; i++){
        int l = i + 1 , r = n - 1;
        while ( l <= r){
            int m = ( l + r)/2;
            if ( a[i] <= f[m]){
                res = max(res, m - i );
                l = m + 1;
            }
            else{
                r = m - 1;
            }
        }
    }
    cout << res << '\n';
}  
int main(){
    Faster();
    int t;
    cin >> t;
    while(t--)
        Process();
}
    