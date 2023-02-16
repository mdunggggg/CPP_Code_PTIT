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
    vector<char> v;
    int sum = 0;
    for (int i = 0; i < s.length(); ++i){
        if (isalpha(s[i]))
            v.push_back(s[i]);
        else
            sum += s[i] - '0';
    }
    sort(v.begin(), v.end());
    for (auto x : v) cout << x;
    cout << sum << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    