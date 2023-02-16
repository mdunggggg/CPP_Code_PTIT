/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    string s; getline(cin >> ws, s); 
    string t; getline(cin >> ws, t); 
    map<string,int>mp;
    stringstream ss(t);
    string token;
    while(ss >> token){
        mp[token]++;
    }
    stringstream sss(s);
    string tokenn;
    set<string>res;
    while(sss >> tokenn){
        if(mp[tokenn] == 0) res.insert(tokenn);
    }
    for(string s : res){
        cout << s << ' ';
    }
    cout << '\n';

}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    