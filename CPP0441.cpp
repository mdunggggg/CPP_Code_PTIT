/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n, x;
    cin >> n >> x;
    int a[n];
    for (auto &so : a) cin >> so;
    for (int i = 0; i < n; ++i) {
        if (a[i] == x) {
            cout << i + 1 << endl;
            return;
        }
    }
    cout << "-1\n";
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    