/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n; cin >> n;
    vector<int>v1(n);
    vector<long long>res(n);
    for(int &x : v1) cin >> x;
    for ( int i = 0 ; i < n ; ++i){
        if(i == 0){
            res[i] = v1[i] * v1[i + 1];
        }
        else if(i == n - 1){
            res[i] = v1[i - 1] * v1[i];
        }
        else res[i] = 1ll * v1[i - 1] * v1[i + 1];
    }
    for(auto x : res) cout << x << ' ';
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    