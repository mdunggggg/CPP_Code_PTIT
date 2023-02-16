/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    string s; cin >> s;
    int dd1[26] = {}, dd2[26] = {};
    int cnt1 = 0, cnt2 = 0;
    for(int i = 0 ; i < s.size(); ++i){
        if(!dd1[s[i] - 'a']){
            ++cnt1;
            dd1[s[i] - 'a'] = 1;
        }
    }
    int left = 0;
    int res = 1e9;
    for(int i = 0; i < s.size(); ++i){
        ++dd2[s[i] - 'a'];
        if(dd2[s[i] - 'a'] == 1) ++cnt2;
        if(cnt1 == cnt2){
            while(dd2[s[left] - 'a'] > 1){
                dd2[s[left] - 'a']--;
                left++;
            }
            res = min(res, i - left + 1); 
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
    