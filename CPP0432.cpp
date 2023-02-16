/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
   int n ; cin >> n;
   vector<string>v(n);
   for(auto &x : v) cin >> x;
   sort(v.begin(), v.end(), [](string a, string b){
        return a + b > b + a;
   });
   for(auto x : v) cout << x;
   cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    