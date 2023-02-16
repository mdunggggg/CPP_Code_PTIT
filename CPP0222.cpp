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
    vector<int> v(MAX, 0); 
    for (int i = 1; i <= n; ++i) {
        set<int> s;
        for (int j = 1; j <= n; ++j) {
            int x;
            cin >> x;
            s.insert(x);
        }
        vector<int> t(s.begin(), s.end());
        for (auto x : t) v[x]++;
    }
    int d = 0;
    for (auto x : v) {
        if (x == n) d++;
    }
    cout << d << '\n';

}  
int main(){
    Faster();
    int t;
    cin >> t;
    while(t--)
        Process();
}
    