/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n , m ; cin >> n >> m;
    int x, b[n][m];
    memset(b, 0, sizeof(b));
    for ( int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j < m ; j++){
            cin >> x;
            if ( x == 1){
                for ( int k = 0 ; k < m ; k++){
                    b[i][k] = 1;
                }
                for ( int k = 0 ; k < n ; k++){
                    b[k][j] = 1;
                }
            }
        }
    }
    for ( int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j < m ; j++){
            cout << b[i][j] << ' ';
        }
        cout << '\n';
    }

}  
int main(){
    Faster();
    int t;
    cin >> t;
    while(t--)
        Process();
}
    