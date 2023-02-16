/*  Hoang Manh Dung - D21 ProPTIT  */

#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e5 + 5;
 /*
    T/c đồng dư: x % p = 1 thì x^2 % p = 1
    Nhận thấy: x % p == 1 thì (x + p*i) % p == 1
    Với mỗi x t/m, ta tìm last là số lớn nhất có dạng (x + p*i) còn t.m last % p == 1
    Như vậy sẽ tính được số lượng số t/m trong đoạn [x, last]
 */
void solve(){
    long long b , p , res = 0;
    cin >> b >> p;
    for ( int i = 1 ; i < p ; i++){
        if ( 1ll * i * i % p == 1){
            long long cur = 0LL + i + p * ( b / p );
            if ( cur  > b) cur -= p;
            res += ( cur - i)/p + 1;
        }
    }
    cout << res << '\n';
}  
int main(){
    Faster();
    int t;
    cin >> t;
    while(t--)
        solve();
}
    