/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void solve(int &num){
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    num = sum;
}
void Process(){
    string s;
    cin >> s;
    int num = 0;
    for (auto x : s) {
        num += x - '0';
    }
    while (num >= 10) {
        solve(num);
    }
    cout << (num == 9) << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    