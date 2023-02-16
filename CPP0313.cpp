/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    string s; getline(cin, s);
    string cur; cin >> cur;
    stringstream ss(s);
    string token;
    string res;
    while(ss >> token){
        if(cur != token) res += token + " "; 
    }
    res.pop_back();
    cout << res;
}
int main(){
    Faster();
    // int t;
    // cin >> t;
    // while(t--)
        Process();
}
    