/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e5 + 5;
int Prime[MAX + 5];
void sieve(){
    Prime[1] = 1;
    for ( int i = 2 ; i <= sqrt(MAX) ; i++){
        if ( Prime[i] == 0){
            for ( int j = i * i ; j <= MAX ; j += i){
                if ( Prime[j] == 0){
                    Prime[j] = i;
                }
            }
        }
    }
    for ( int i = 2 ; i <= MAX ; i++){
        if ( Prime[i] == 0) Prime[i] = i;
    }
}

void solve(){
    int n ;
    cin >> n;
    for ( int i = 1 ; i <= n ;i++){
        cout << Prime[i] << " ";
    }
    cout << '\n';
}  
int main(){
    Faster();
    int t;
    cin >> t;
    sieve();
    while(t--)
        solve();
}
    