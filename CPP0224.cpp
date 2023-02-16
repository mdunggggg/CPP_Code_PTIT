/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e2 + 5;
pair<int,int>path[8] = {{-1,-1},{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1}};
int vis[MAX][MAX], a[MAX][MAX];
int n , m, res;
void DFS( int x , int y){
    vis[x][y] = 1;
    for ( int k = 0 ; k < 8 ; k++){
        int i = x + path[k].first;
        int j = y + path[k].second;
        if ( i >= 1 && i <= n && j >= 1 && j <= m && a[i][j] && !vis[i][j]){
            DFS(i,j);
        }
    }
}
void Process(){
    memset(vis, 0, sizeof(vis));
    res = 0;
   cin >> n >> m ;
   for ( int i = 1; i <= n ; ++i){
        for ( int j = 1 ; j <= m ; ++j){
            cin >> a[i][j];
        }
   }
   for ( int i = 1 ; i <= n ; ++i){
        for ( int j = 1 ; j <= m ; ++j){
            if ( a[i][j] && !vis[i][j]){
                DFS(i,j);  
                res++;
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
    