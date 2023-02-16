/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n; cin >> n;
    int k; cin >> k;
    vector<int>v;
    for ( int i = 1 ; i <= n ; i++){
        for ( int i = 1 ; i <= n ; i++){
            int x; cin >> x;
            v.emplace_back(x);
        }
    }
    sort(v.begin(), v.end());
    cout << v[k-1] << '\n';

}  
int main(){
    Faster();
    int t;
    cin >> t;
    while(t--)
        Process();
}
    