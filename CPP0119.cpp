/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

void solve(){
    int n;
    cin >> n;
    int d = 0;
    for (int i = 1; i <= sqrt(n); ++i){
        if (n % i == 0) {
            if (i % 2 == 0)
                d++;
            if ((n / i) % 2 == 0 && i * i != n)
                d++;
        }
    }
    cout << d << '\n';
}  
int main(){
    Faster();
    int t;
    cin >> t;
    while(t--)
        solve();
}
    
