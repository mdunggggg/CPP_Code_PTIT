/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n, k ; cin >> n >> k;
    int a[n];
    for ( int &x : a) cin >> x;
    int res = 0;
    for ( int i = 0 ; i < n ; ++i){
        for ( int j = i + 1 ; j < n ; ++j){
            if (a[i] + a[j] == k) ++res;
        }
    }
    cout << res << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    