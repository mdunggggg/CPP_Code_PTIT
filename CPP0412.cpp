
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n ;
int a[MAX];
void solve(){
    cin >> n ;
    int cnt_0 = 0 , cnt_1 = 0 , cnt_2 = 0;
    for ( int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    sort(a , a + n);
    for ( int i = 0 ; i < n ; i++) cout << a[i] << ' ';
    cout << "\n";
}  
int main(){
    Faster();
    int t;
    cin >> t;
    while(t--)
        solve();
}
    