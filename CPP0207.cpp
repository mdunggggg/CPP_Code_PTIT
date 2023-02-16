/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n , d;
    cin >> n >> d;
    int a[n];
    for ( int &x : a) cin >> x;
    d %= n;
    for ( int i = d ; i < n ; i++) cout << a[i] << ' ';
    for ( int i = 0 ; i < d  ; i++) cout << a[i] << ' ';
    cout << '\n';
}  
int main(){
    Faster();
    int t;
    cin >> t;
    while(t--)
        Process();
}
    