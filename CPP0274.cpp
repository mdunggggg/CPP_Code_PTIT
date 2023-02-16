/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int f[MAX];
void Process(){
    int n ;
    cin >> n ;
    int a[n];
    memset(f, 0, sizeof(f));
    for ( int &x : a){
        cin >> x;
        f[x]++;
    }
    int res = 0;
    for ( int &x : a){
        if ( f[x] >= 2) res++;
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
    