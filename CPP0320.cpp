/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    string s;
    cin >> s;
    if (s[0] == '0') {
        cout << "INVALID\n";
        return;
    }
    set<char>se;
    for(char c : s){
        if(!isdigit(c)){
            cout << "INVALID\n";
            return;
        }
        se.insert(c);
    }
    if(se.size() == 10) cout << "YES\n";
    else cout << "NO\n";
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    