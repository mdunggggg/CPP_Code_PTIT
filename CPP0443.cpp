/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n;
    cin >> n;
    int a[n - 1];
    vector<bool> dd(n + 1, 0);
    for (auto &x : a) {
        cin >> x;
        dd[x] = 1;
    }
    for (int i = 1; i <= n; ++i) {
        if (!dd[i]) {
            cout << i << '\n';
            return;
        }
    }
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    