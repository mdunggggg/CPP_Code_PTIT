/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e5 + 5;
void Process(){
    int n , l = INT_MAX, r = INT_MIN ; cin >> n ;
    int a[n], dd [MAX] = {};
    for (int &x : a){
        cin >> x;
        dd[x]++;
        l = min(l , x);
        r = max(r , x);
    }
    int res = 0;
    for (int i = l ; i <= r; ++i){
        if(!dd[i]) ++res;
    }
    cout << res << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    