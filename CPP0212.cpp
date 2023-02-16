/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
long long PowMod( long long a, long long b){
    long long res = 1;
    while(b){
        if ( b % 2 == 1){
            res *=  a;
            res %= MOD;
        }
        a *= a;
        a %= MOD;
        b /= 2;
    }
    return res;
}
void Process(){
    long long n  , x;
    cin >> n >> x;
    long long tmp;
    long long res = 0;
    for ( int i = 0 ; i < n ; i++){
        cin >> tmp;
        res += tmp * PowMod(x ,n -  i - 1);
        res %= MOD;
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
    