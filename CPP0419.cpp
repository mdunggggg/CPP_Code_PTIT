/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e5 + 5;
void Process(){
    int n, m;
    cin >> n >> m;
    int dd1[MAX] = {}, dd2[MAX] = {};
    int a[n], b[m];
    for(int &x : a){
        cin >> x;
        dd1[x] = 1;
    }
    for(int &x : b){
        cin >> x;
        dd2[x] = 1;
    }
    for ( int i = 0 ; i < MAX ; ++i){
        if(dd1[i] || dd2[i]) cout << i << ' ';
    }
    cout << '\n';
     for ( int i = 0 ; i < MAX ; ++i){
        if(dd1[i] && dd2[i]) cout << i << ' ';
    }
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    