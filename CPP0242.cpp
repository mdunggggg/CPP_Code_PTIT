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
    int a[n+1], b[n+1], f1[n+1] = {}, f2[n+1] = {};
    for ( int i = 1 ; i <= n ; ++i){
        cin >> a[i];
        f1[i] = f1[i-1] + a[i];
    }
    for ( int i = 1 ; i <= n ; ++i){
        cin >> b[i];
        f2[i] = f2[i-1] + b[i];
    }
    int res = 0;
    for ( int i = 1 ; i <= n ; ++i){
        for ( int j = i + 1 ; j <= n ; ++j){
            if ( f1[j] - f1[i-1] == f2[j] - f2[i-1]){
                res = max(res, j - i + 1);
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
    