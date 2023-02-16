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
    vector<bool> v(n, 0);
    for (int i = 0; i < n; ++i) {
        long long x;
        cin >> x;
        if (x < 0 || x >= n)
            continue;
        v[x] = 1;
    }
    for (int i = 0; i < n; ++i) {
        if (v[i])
            cout << i << " ";
        else
            cout << "-1 ";
    }
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    