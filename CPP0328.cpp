/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    string s; cin >> s;
    int res = 0;
    int cnt8 = 0, cnt3 = 0;
    for(int i = 0 ; i < s.size(); ++i){
        cnt8 = cnt3 = 0;
        for(int j = i ; j < s.size(); ++j){
            cnt8 = (cnt8 * 10 + s[j] - '0') % 8;
            cnt3 = (cnt3 * 10 + s[j] - '0') % 3;
            if(!cnt8 && cnt3)++res;
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
    