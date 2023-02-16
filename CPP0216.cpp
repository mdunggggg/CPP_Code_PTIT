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
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int l, r;
    cin >> l >> r;
    while (l <= r && a[l] <= a[l + 1])
        l++;
    l++;
    while (l <= r && a[l] <= a[l - 1])
        l++;
    (l > r) ? cout << "Yes\n" : cout << "No\n";
}  
int main(){
    Faster();
    int t;
    cin >> t;
    while(t--)
        Process();
}
    