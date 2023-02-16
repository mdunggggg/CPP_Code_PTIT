/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e5 + 5;
long long lcm ( long long a , long long b){
    return 1ll * a * b / __gcd(a,b);
}
void solve(){
    long long x , y , z , n;
    cin >> x >> y >> z >> n;
    long long l = pow(10, n - 1);
    long long r = pow(10, n) - 1;
    long long bc = lcm(lcm(x, y), z);
    if (bc > r)
        cout << "-1\n";
    else if (l % bc == 0)
        cout << l << endl;
    else
    {
        long long d = l / bc;
        cout << bc * (d + 1) << "\n";
    }
}  
int main(){
    Faster();
    int t;
    cin >> t;
    while(t--)
        solve();
}
    