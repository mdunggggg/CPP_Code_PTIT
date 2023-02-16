/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
char c;
int a[25][25], n , m;
int vis[25][25];
pair<int,int>path[4] = {{-1, 0}, {0, 1}, {0, -1}, {1, 0}};
void DFS( int i , int j, int value){
    a[i][j] = value;
    int j1 , i1;
    for ( int k = 0 ; k < 4 ; ++k){
        i1 = i + path[k].first;
        j1 = j + path[k].second;
        if ( i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == 0){
            DFS(i1, j1, value);
        }
    }
}
void Process(){
    memset(a, 0, sizeof(a));
    cin >> n >> m ;
    for ( int i = 0 ; i < n ; ++i){
        for ( int j = 0 ; j < m ; ++j){
            cin >> c;
            if ( c == 'X') a[i][j] = 1;
            else a[i][j] = 0;
        }
    }
    for ( int i = 0 ; i < n ; i++){
        if ( a[i][0] == 0) DFS(i, 0, 2);
        if ( a[i][m - 1] == 0) DFS(i , m - 1, 2);
    }
    for ( int j  = 0 ; j < m ; j++){
        if ( a[0][j] == 0) DFS(0 , j, 2); 
        if ( a[n - 1][j] == 0) DFS(n - 1 , j, 2);
    }
    for ( int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j < m ; j++){
            if ( a[i][j] == 0){
                DFS(i, j, 1);
            }
        }
    }
    for ( int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j < m ; j++){
            if ( a[i][j] == 0 || a[i][j] == 2) cout << "O ";
            else cout << "X ";
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
    