/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n , k; cin >> n >> k;
    int a[n];
    int d = 0;
    for (int i = 0 ; i < n ; ++i){
        cin >> a[i];
        if(a[i] <= k) ++d;
    }
    int cnt = 0;
    for ( int i = 0 ; i < d; ++i){
        if(a[i] <= k) ++cnt;
    }
    int res = cnt;
    for (int i = d ; i < n ; ++i){
        if(a[i - d] <= k) -- cnt;
        if(a[i] <= k) ++cnt;
        res = max(res, cnt);
    }
    cout << d - res << '\n';

}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    