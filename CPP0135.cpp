/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
bool isPrime(int n){
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); ++i){
        if (n % i == 0)
            return 0;
    }
    return 1;
}
void solve(){
    int n;
    cin >> n;
    for (int i = 2; i <= sqrt(n); ++i){
        if (isPrime(i))
            cout << i * i << " ";
    }
    cout << '\n';
}  
int main(){
    Faster();
    int t;
    cin >> t;
    while(t--)
        solve();
}
    
