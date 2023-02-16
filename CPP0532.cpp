/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n; cin >> n;
    vector<pair<int,int>>v(n);
    for(int i = 0 ; i < n ; ++i){
        cin >> v[i].first >> v[i].second;
    }
    double res = 0, sum1 = 0, sum2 = 0;
    v.push_back(v[0]);
    for(int i = 0 ; i < n ; ++i){
        res += (v[i].first * v[i + 1].second - v[i].second * v[i + 1].first);
    }
    if(res < 0) res = - res;
    cout << fixed << setprecision(3) << res/2 << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    