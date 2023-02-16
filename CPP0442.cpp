/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
bool bs(int a[], int l, int r, int x) {
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] == x) return 1;
        if (a[m] > x) r = m - 1;
        else l = m + 1;
    }
    return 0;
}
void Process(){
    int n, x;
    cin >> n >> x;
    int a[n];
    for (auto &so : a) cin >> so;
    sort(a, a + n);
    if (bs(a, 0, n - 1, x)) cout << "1\n";
    else cout << "-1\n";
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    