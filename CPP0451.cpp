/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n, k, x, l, r;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
         cin >> a[i];
    }    
    cin >> k >> x;
    int m = lower_bound(a.begin(), a.end(), x) - a.begin();
    if (a[m] == x){
        r = m + 1;
        l = m - 1;
    }
    else{
        r = m;
        l = m - 1;
    }
    for (int i = k / 2 - 1; i >= 0; i--){
        cout << a[l - i] << " ";
    }
    for (int i = 0; i < k / 2; i++){
        cout << a[r + i] << " ";
    }
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    