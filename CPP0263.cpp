/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n; cin >> n;
    int a[n + 5][n + 5];
    for ( int i = 1 ; i <= n ; ++i){
        for ( int j = 1 ; j <= n ; ++j){
            cin >> a[i][j];
        }
    }
    int res = INT_MIN;
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= n; ++j) {
            int x = 0, y = 0;
            for (int k = 1; i - k >= 1 && j - k >= 1 && i + k <= n && j + k <= n; ++k) {
                x += a[i - k][j - k] + a[i + k][j + k];
                y += a[i - k][j + k] + a[i + k][j - k];
                res = max(res , x - y);
           }
        }
    }
    for (int i = 1; i < n; ++i){
        for (int j = 1; j < n; ++j) {
            int x = 0, y = 0;
            for (int k = 0; i - k >= 1 && j - k >= 1 && i + k + 1 <= n && j + k + 1 <= n; ++k) {
                x += a[i - k][j - k] + a[i + k + 1][j + k + 1];
                y += a[i - k][j + k + 1] + a[i + k + 1][j - k];
                res = max(res, x - y);
            }
        }
    }  
    cout << res;
}  
int main(){
   Faster();
    // int t;
    // cin >> t;
    // while(t--)
        Process();
}
    