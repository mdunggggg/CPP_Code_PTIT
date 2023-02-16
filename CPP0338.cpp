/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    string s; cin >> s;
    int k; cin >> k;
    int res = 0;
    for(int i = 0; i < s.size(); ++i){
        set<char>se;
        for(int j = i ; j < s.size(); ++j){
            se.insert(s[j]);
            if(se.size() == k) ++res;
        }
    }
    cout << res << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    