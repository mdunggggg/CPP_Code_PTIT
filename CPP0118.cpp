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
    vector<int> v;
    for (int i = 2; i <= sqrt(n); ++i){
        if (n % i == 0){
            while (n % i == 0){
                v.push_back(i);
                n /= i;
            }
        }
        if (n == 1)
            break;
    }
    if (n > 1)
        v.push_back(n);
    if (v.size() == 3 && v[0] != v[1] && v[1] != v[2])
        cout << "1\n";
    else
        cout << "0\n";
}  
int main(){
    Faster();
    int t;
    cin >> t;
    while(t--)
        solve();
}
    
