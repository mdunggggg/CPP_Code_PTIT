/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

void Process(){
    int n, m, l;
    cin >> n >> m >> l;
    long long a[n], b[m], c[l];
    
    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;
    for(auto &x : c) cin >> x;

    int i = 0, j = 0, k = 0;
    bool OK = 0;
    while (i < n && j < m && k < l) {
        if (a[i] == b[j] && b[j] == c[k]) {
            cout << a[i] << " ";
            i++, j++, k++;
            OK = 1;
        }
        else if (a[i] < b[j]) i++;
        else if (b[j] < c[k]) j++;
        else k++;
    }
    if (!OK) cout << -1;
    cout << endl;
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    