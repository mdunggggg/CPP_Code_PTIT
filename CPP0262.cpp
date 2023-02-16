/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    long long n, m; cin >> n >> m;
    long long sum = n * (n + 1) / 2;
    long long a = (sum + m) / 2;
    long long b = sum - a;
    if (a - b == m && __gcd(a, b) == 1) cout << "Yes";
    else cout << "No";
    cout << '\n';
    
}  
int main(){
    Faster();
    int t;
    cin >> t;
    while(t--)
        Process();
}
    