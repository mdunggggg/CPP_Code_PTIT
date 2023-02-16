/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

void Process(){
    int n , m , l;
    long long res = 0;
    cin >> n >> m >> l;
    vector < vector <int> > a(n+1, vector <int> (m+1,0));
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            cin >> a[i][j];
            a[i][j] += a[i-1][j] + a[i][j-1] - a[i-1][j-1];
        }
    }
    for(int i = 1 ; i <= n - l + 1;i++){
        for(int j = 1 ; j <= m - l + 1 ; j++){
            cout << (a[i+l-1][j+l-1]-a[i-1][j+l-1]-a[i+l-1][j-1]+a[i-1][j-1])/(l*l)<<" ";
        }
        cout << '\n';
    }
}  
int main(){
   Faster();
    int t;
    cin >> t;
    while(t--)
        Process();
}
    