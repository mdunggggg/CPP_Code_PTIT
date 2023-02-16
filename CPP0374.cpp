/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    string s;
    cin >> s;
    int n = s.size();
    s = " " + s;
    vector<int>fa(n+1,0),fb(n+1,0);
    for (int i = 1; i <= n; i++){
        if (s[i] == 'A'){
            fa[i] = fa[i - 1];
            fb[i] = min(fb[i - 1] + 1, fa[i - 1] + 1);
        }
        else{
            fb[i] = fb[i - 1];
            fa[i] = min(fa[i - 1] + 1, fb[i - 1] + 1);
        }
        }
        cout << min(fa[n], fb[n] + 1) << "\n";
}
int main(){
    Faster();
        Process();
}
    