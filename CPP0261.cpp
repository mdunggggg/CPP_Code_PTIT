/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n ; cin >> n ;
    int a[n][n];
    for ( int i = 0 ; i < n ; ++i){
        for ( int j = 0 ; j < n ; ++j){
            cin >> a[i][j];
        }
    }
    int m; cin >> m ;
    int b[m][m];
    for ( int i = 0 ; i < m ; ++i){
        for ( int j = 0 ; j < m ; ++j){
            cin >> b[i][j];
        }
    }
    for ( int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j < n ; j++){
            cout << a[i][j] * b[i%m][j%m] << ' ';
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
    