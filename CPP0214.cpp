/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for (auto &x : a) cin >> x;
    deque<int> dq;
    for (int i = 0; i < n; ++i) {
        while (!dq.empty() && a[dq.back()] <= a[i]) dq.pop_back();
        dq.push_back(i);
        if (dq.front() < i - k + 1)  dq.pop_front();
        if (i - k + 1 >= 0) cout << a[dq.front()] << " ";
           
    }
    cout << '\n';

}  
int main(){
    Faster();
    int t;
    cin >> t;
    while(t--)
        Process();
}
    