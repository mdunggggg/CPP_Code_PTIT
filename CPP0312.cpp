/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    string s; cin >> s;
    int k;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    map<char,int>mp;
    for( char c : s){
        mp[c]++;
    }
    int cnt = 0;
    for (char c = 'a' ; c <= 'z' ; ++c){
        if (mp[c] == 0) cnt++; 
    }
    cin >> k;
    (k >= cnt) ? cout << "1\n" : cout << "0\n";
}
int main(){
    Faster();
    int t;
    cin >> t;
    while(t--)
        Process();
}
    