/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n;
void Process(){
    cin >> n ;
    int a[n];
    for ( int &x : a) cin >> x;
    int l = 0 , r = n - 1;
    int res = 0;
    while(l <= r){
        if(a[l] == a[r]){
            l++;
            r--;
        }
        else if(a[l] < a[r]){
            a[l+1] += a[l];
            l++;
            res++;
        }
        else{
            a[r-1] += a[r];
            r--;
            res++;
        }
    }
    cout << res << '\n';
}  
int main(){
    Faster();
    int t;
    cin >> t;
    while(t--)
        Process();
}
    