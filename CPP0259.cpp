/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n , m , p;
    cin >> n >> m >> p;
    int a[n][m] , b[m][p];
    for ( int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j < m ; j++){
            cin >> a[i][j];
        }
    }
    for ( int i = 0 ; i < m ; i++){
        for ( int j = 0 ; j < p ; j++){
            cin >> b[i][j];
        }
    }
    for ( int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j < p ; j++){
            long long cur = 0;
            for ( int k = 0 ; k < m ; k++){
                cur += 1ll * a[i][k] * b[k][j];
            }
            cout << cur << ' ';
        }
        cout << '\n';
    }
}  
int main(){
    Faster();
    // int t;
    // cin >> t;
    // while(t--)
        Process();
}
    