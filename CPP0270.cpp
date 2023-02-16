/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n, m; cin >> n >> m;
    long long res = 0;
    int a[n][m], b[3][3];
    for ( int i = 0 ; i < n ; ++i){
        for ( int j = 0 ; j < m ; ++j){
            cin >> a[i][j];
        }
    }
    for ( int i = 0 ; i < 3 ; ++i){
        for ( int j = 0 ; j < 3 ; ++j){
            cin >> b[i][j];
        }
    }
    for ( int i = 0 ; i <= n - 3 ; ++i){
        for ( int j = 0 ; j <= m - 3 ; ++j){
            for ( int k = i ; k < i + 3 ; k++){
                for ( int l = j ; l < j + 3 ; l++){
                    res += 1ll * a[k][l] * b[k - i][l - j];
                }
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
    