/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n, cur; cin >> n >> cur;
    int cnt = 0 , x;
    for (int i = 1 ; i <= n ; ++i){
        cin >> x;
        if(x == cur){
            ++cnt;
        }
    }
    (cnt == 0) ? cout << "-1\n" : cout << cnt << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    