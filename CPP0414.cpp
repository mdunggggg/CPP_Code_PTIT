/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n;
    cin >> n;
    bool dd[10] = {0};
    for (int i = 1; i <= n; ++i){
        string s;
        cin >> s;
        for (auto x : s)
            dd[x - '0'] = 1;
    }
    for (int i = 0; i < 10; ++i){
        if (dd[i] == 1)
            cout << i << " ";
    }
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    