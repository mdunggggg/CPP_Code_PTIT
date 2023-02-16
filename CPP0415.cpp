/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
     int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;
    int maxx = *max_element(a, a + n);
    int minn = *min_element(b, b + m);
    long long r = (long long)minn * maxx;
    cout << r << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    