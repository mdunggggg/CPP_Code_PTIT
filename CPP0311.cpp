/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    string s; cin >> s;
    int dd[26] = {};
    int cnt = 0;
    for (char c : s){
        dd[c - 'a']++;
    }
    for (int x : dd){
        cnt = max(cnt , x);
    }
    if(cnt <= (s.size() + 1) / 2) cout << "1\n";
    else cout << "0\n";   
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    