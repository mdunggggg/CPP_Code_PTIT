/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e5 + 5;

bool isPrime(int n){
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
void solve(){
    long long l, r;
    cin >> l >> r;
    l = ceil(sqrt(l));
    r = floor(sqrt(r));
    int d = 0;
    for (int i = l; i <= r; ++i){
        if (isPrime(i))
            d++;
    }
    cout << d << endl;
}  
int main(){
    Faster();
    int t;
    cin >> t;
    while(t--)
        solve();
}
    