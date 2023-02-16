/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int isPrime[MAX+1];
void sieve() {
    isPrime[0] = 1;
    isPrime[1] = 1;
    for(int i = 2; i <= sqrt(MAX); ++i) {
         if(isPrime[i] == 0) {
             for(int j = i * i; j <= MAX; j += i)
                 isPrime[j] = 1;
        }
    }
}
void Process(){
    int l , r;
    cin >> l >> r;
    int res = 0;
    for ( int i = l ; i <= r ; i++){
        if ( !isPrime[i]) res++;
    }
    cout << res << '\n';

}  
int main(){
    Faster();
    sieve();
    int t;
    cin >> t;
    while(t--)
        Process();
}
    