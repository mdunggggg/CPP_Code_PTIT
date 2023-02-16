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
    int a[n][n], row[n], col[n], maxx = 0;
    bool flag = 0; 
    for (int i = 0; i < n; ++i) {
        row[i] = 0;
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
            row[i] += a[i][j];
        }
        if (row[i] > maxx) {
            maxx = row[i];
            flag = 0;
        }
    }

    for (int j = 0; j < n; ++j) {
        col[j] = 0;
        for (int i = 0; i < n; ++i) {
            col[j] += a[i][j];
        }
        if (col[j] > maxx) {
            maxx = col[j];
            flag = 1;
        }
    }

    int res = 0;
    if (!flag) {
        for (auto x : col)
            res += maxx - x;
    }
    else {
        for (auto x : row)
            res += maxx - x;
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
    