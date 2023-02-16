/*  Hoang Manh Dung - D21 ProPTIT  */

#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e5 + 5;
string cmp = "ueoaiy";
void solve(){
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for ( char &c : s){
        int flag = 1;
        for ( char &x : cmp){
            if ( c == x){
                flag = 0;
                break;
            }
        }
        if (flag) cout << '.' << c;
    }
}  
int main(){
    Faster();
    // int t;
    // cin >> t;
    // while(t--)
        solve();
}
    