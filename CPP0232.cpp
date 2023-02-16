/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprescision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n, m ;
    cin >> n >> m;
    vector <vector <int> > v(n,vector <int> (m));
    for ( int i = 0 ; i < n ; ++i){
        for ( int j = 0 ; j < m ; ++j){
            cin >> v[i][j];
        }
    }
    for ( int j = 0 ; j < m ; ++j){
        for ( int i = 1 ; i < n ; ++i){
            if ( v[i][j] == 1){
                v[i][j] = v[i - 1][j] + 1;
            }
        }
    }
    int res = 0;
    int l[m], r[m];
    for ( int i = 0 ; i < n ; ++i){
        sort(v[i].begin(),v[i].end());
        stack<int>st1, st2;
        for ( int j = 0 ; j < m ; j++){
            while(!st1.empty() && v[i][st1.top()] >= v[i][j]) st1.pop();
            if ( st1.empty()) l[j] = 0;
            else l[j] = st1.top() + 1;
            st1.push(j);
        }
        for ( int j = m - 1 ; j >= 0 ; j--){
              while(!st2.empty() && v[i][st2.top()] >= v[i][j]) st2.pop();
            if ( st2.empty()) r[j] = m - 1;
            else r[j] = st2.top() - 1;
            st2.push(j);
        }
        for(int j = 0 ; j < m ; j++) res = max(res,(r[j]-l[j]+1) * v[i][j]);
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
    