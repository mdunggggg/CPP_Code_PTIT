/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    vector<int>v;
    map<int,int>mp;
    int x;
    while(cin >> x){
        v.push_back(x);
        mp[x]++;
    }
    for ( int i = 0 ; i < v.size(); ++i){
        if ( mp[v[i]] != 0){
            cout << v[i] << ' ' << mp[v[i]] << '\n';
            mp[v[i]] = 0;
        }
    }

}  
int main(){
    Faster();
    // int t;
    // cin >> t;
    // while(t--)
        Process();
}
    