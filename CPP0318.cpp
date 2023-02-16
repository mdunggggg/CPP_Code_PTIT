/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
bool ascending(string s){
    for (int i = 1; i < 5; ++i)
    {
        if (s[i] <= s[i - 1])
            return 0;
    }
    return 1;
}

bool descending(string s){
    for (int i = 1; i < 5; ++i)
    {
        if (s[i] >= s[i - 1])
            return 0;
    }
    return 1;
}

bool beautiful(string s){
    return (s[0] == s[1] && s[1] == s[2] && s[3] == s[4]);
}

bool lucky(string s){
    for (int i = 0; i < 5; ++i)
    {
        if (s[i] != '6' && s[i] != '8')
            return 0;
    }
    return 1;
}
void Process(){
    string s;
    cin >> s;
    s.erase(0, 5);
    s.erase(3, 1);
    if (ascending(s) || descending(s) || beautiful(s) || lucky(s))
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    