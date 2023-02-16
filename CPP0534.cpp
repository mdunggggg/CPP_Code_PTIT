/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
string s;
map<string, int>mp;
vector<pair<string,int>>v;
bool check(string s){
    string t = s;
    reverse(s.begin(),s.end());
    return (s == t && s.size() != 1);
}
void Process(){
    while(cin >> s){
        if(check(s)) mp[s]++;
    }
    for(auto &it : mp){
        v.push_back(it);
    }
    sort(v.begin(),v.end(),[](pair<string,int>a, pair<string,int>b){
        if(a.first.length() == b.first.length()){
            return a > b;
        };
        return a.first.length() > b.first.length();
    });
    for(auto it : v){
        cout << it.first << ' ' << it.second << '\n';
    }
    
}
int main(){
    Faster();
    // int t; cin >> t;
    // while(t--)
        Process();
}
    