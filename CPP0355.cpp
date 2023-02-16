/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
bool check(string s) {
    char c = s.back();
    return (c == '.' || c == '?' || c == '!');
}

void Process(){
    vector<string> v;
    string s;
    while (cin >> s) {
        v.push_back(s);
    }
    bool flag = 1;
    for (auto x : v) {
        transform(x.begin(), x.end(), x.begin(), ::tolower);
        if (flag) {
            x[0] = toupper(x[0]);
            flag = 0;
        }
        
        if (check(x)) {
            x.pop_back();
            cout << x << '\n';
            flag = 1;
        }
        else
            cout << x << " ";
    }
}
int main(){
    Faster();
    // int t; cin >> t;
    // while(t--)
        Process();
}
    