/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

void Process(){
    int n , m, k; cin >> n >> m >> k;
    int a[n][m], b[n * m];
    for ( int i = 0; i < n ; ++i){
        for ( int j = 0 ; j < m ; ++j){
            cin >> a[i][j];
        }
    }
    int cnt = 0 , row = n - 1 , col = m - 1, d = 0;
    while(cnt < n * m){
        for ( int i = d ; i <= col ; i++) b[cnt++] = a[d][i];
        for ( int i = d + 1 ; i <= row ; i++) b[cnt++] = a[i][col];
        for ( int i = col - 1 ; i >= d ; i--) b[cnt++] = a[row][i];
        for ( int i = row - 1 ; i > d ; i--) b[cnt++] = a[i][d];
        d++; row--; col--;
    }
    cout << b[k - 1];
    cout << '\n';
}  
int main(){
   Faster();
    int t;
    cin >> t;
    while(t--)
        Process();
}
    