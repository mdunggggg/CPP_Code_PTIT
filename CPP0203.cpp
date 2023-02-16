/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int vis[MAX];
void Process(){
    int n; cin >> n ;
    int a[n];
    memset(vis, 0, sizeof(vis));
    for ( int &x : a){
        cin >> x;
        if ( x >= 0) vis[x]++;
    }
    for ( int i = 1 ; i < MAX ; i++){
        if ( vis[i] == 0){
            cout << i << '\n';
            return ;
        }
    }
    
}  
int main(){
    Faster();
    int t;
    cin >> t;
    while(t--)
        Process();
}
    