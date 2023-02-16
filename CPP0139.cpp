/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e5 + 5;
bool isPrime(int n) {
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int Sum(int n) {
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}
void solve(){
    int n;
    cin >> n;
    if (isPrime(n)) {
        cout << "NO\n";
        return;
    }
    int s1 = Sum(n);
    int s2 = 0;
    for (int i = 2; i <= sqrt(n); ++i) {
        while (n % i == 0) {
            s2 += Sum(i);
            n /= i;
        }
        if (n == 1)
            break;
    }
    if (n > 1)
        s2 += Sum(n);
    (s1 == s2) ? cout << "YES\n" : cout << "NO\n";
}  
int main(){
    Faster();
    int t;
    cin >> t;
    while(t--)
        solve();
}
    