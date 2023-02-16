/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    string s, t; cin >> s >> t;
    int dd_t[26] = {};
    int res = INT_MAX, left, right;
    for(char c : t) ++dd_t[c - 'a'];
    for(int i = 0 ; i < s.size(); ++i){
        int dd_s[26] = {};
        for(int j = i ; j < s.size(); ++j){
            ++dd_s[s[j] - 'a'];
            int flag = 0;
            for(int k = 0 ; k < 26 ; ++k){
                if(dd_s[k] < dd_t[k]){
                    flag = 1;
                    break;
                }
            }
            if(!flag){
                if(res > j - i + 1){
                    res = j - i + 1;
                    left = i, right = j;
                }
               
            }
        }
    }
    if(res == INT_MAX) cout << "-1";
    else {
        for(int i = left ; i <= right; ++i){
            cout << s[i];
        }
    }
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    