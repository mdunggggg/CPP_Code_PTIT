/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e5 + 5;

void Process(){
    int n; cin >> n ;
    int a[n];
    for ( int &x : a) cin >> x;
    sort(a , a + n);
    int res = INT_MAX;
    for ( int i = 1 ; i < n ; i++){
        res = min(res , a[i] - a[i-1]);
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
    