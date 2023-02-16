/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int m , n; cin >> m >> n;
    string s; cin >> s;
    long long dp[m + 5][n + 5];
    memset(dp, 0, sizeof(dp));
    dp[0][(s[0] - '0') % n]++;
    for(int i = 1 ; i < m ; ++i){
        dp[i][(s[i] - '0') % n]++;
        for(int j = 0 ; j < n ; ++j){
            dp[i][j] += dp[i - 1][j];
            dp[i][(j * 10 + s[i] - '0') % n] += dp[i - 1][j];
        }
    }
    cout << dp[m - 1][0] << '\n';
   
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    