/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprescision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
   int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    map<int, int> mp;
    for (int &x : a) cin >> x;
    for (int &x : b) {
        cin >> x;
        mp[x] = 1;
    }

    vector<int> res;
    for (int x : a) {
        if (mp[x] >= 1) mp[x]++;
        else res.push_back(x);
    }

    for (int x : b) {
        if (mp[x] > 0) {
            for (int j = 1; j < mp[x]; ++j) {
                cout << x << " ";
            }
            mp[x] = 0;
        }
    }
    sort(res.begin(), res.end());
    for (int x : res) cout << x << " ";
    cout << '\n';

}  
int main(){
    Faster();
    int t;
    cin >> t;
    while(t--)
        Process();
}
    