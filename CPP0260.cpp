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
   vector<int>v;
   int x, a[n][n];
   for ( int i = 0 ; i < n ; ++i){
        for ( int j = 0 ; j < n ; ++j){
            cin >> x;
            v.emplace_back(x);
        }
   }
   sort(v.begin(), v.end());
   int cnt = 0 , row = n - 1 , col = n - 1 , d = 0;
   while(cnt < n * n){
        for ( int i = d ; i <= col ; i++) a[d][i] = v[cnt++];
        for ( int i = d + 1 ; i <= row ; i++) a[i][col] = v[cnt++];
        for ( int i = col - 1 ; i >= d ; i--) a[row][i] = v[cnt++];
        for ( int i = row - 1 ; i > d ; i--) a[i][d] = v[cnt++]; 
        d++; row--; col--;
   }
   for ( int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j < n ; j++){
            cout << a[i][j] << ' ';
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
    