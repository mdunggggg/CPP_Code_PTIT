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
    vector<int> a(n);;
    for(int &x : a) cin >> x;
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] == 0)
            continue;
        if (a[i] == a[i + 1]) {
            a[i] *= 2;
            a[i + 1] = 0;
        }
    }
    int d = 0;
    for (auto x : a) {
        if (x != 0) {
            cout << x << " ";
            d++;
        }
    }
    while (d < n) {
        cout << "0 ";
        d++;
    }
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    