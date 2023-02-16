/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n; cin >> n ;
    int a[n];
    for ( int &x : a) cin >> x;
    sort(a , a + n);
    int cur = a[n-1] - a[0];
    vector<int>v;
      for (int i = 1; i <= sqrt(cur); ++i) {
        if (cur % i == 0) {
            v.push_back(i);
            if (i * i != cur)
                v.push_back(cur / i);
        }
    }
    int res = 0;
    for (int i = 0; i < v.size(); ++i) {
        int temp = a[0] % v[i];
        int j;
        for (j = 1; j < n; ++j) {
            if (a[j] % v[i] != temp)
                break;
        }
        if (j == n)
            res++;
    }
    cout << res << endl;

}  
int main(){
    Faster();
    int t;
    cin >> t;
    while(t--)
        Process();
}
    