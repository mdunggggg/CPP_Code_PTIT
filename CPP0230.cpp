/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n ;
    cin >> n ;
    int a[n][3];
    for ( int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j < 3 ; j++){
            cin >> a[i][j];
        }
    }    
    int res = 0;
    for ( int i = 0 ; i < n ; i++){
        int cnt = 0;
        for ( int j = 0 ; j < 3 ; j++){
            if ( a[i][j]) cnt++;
        }
        if ( cnt > 3 - cnt ) res++;
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
    