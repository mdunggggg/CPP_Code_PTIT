/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e5 + 5;
void Process(){
    int n , k , b;
    cin >> n >> k >> b;
    int a[MAX] = {};
    for(int i = 0; i < b ; ++i){
        int x; cin >> x;
        a[x] = 1;
    }
    int cnt = 0;
    for(int i = 1 ; i <= k ; ++i){
        if(a[i]) ++cnt;
    }
    int res = cnt;
    for(int i = k + 1; i <= n; ++i){
        cnt = cnt - a[i - k] + a[i];
        res = min(res, cnt);
    }
    cout << res;
}
int main(){
    Faster();
    // int t; cin >> t;
    // while(t--)
        Process();
}
    