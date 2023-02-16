/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
long long Min(string a, string b){
    for (int i = 0; i < a.length(); ++i) {
        if (a[i] == '6')
            a[i] = '5';
    }
    for (int i = 0; i < b.length(); ++i) {
        if (b[i] == '6')
            b[i] = '5';
    }
    long long x = stoll(a), y = stoll(b);
    return x + y;
}

long long Max(string a, string b){
    for (int i = 0; i < a.length(); ++i) {
        if (a[i] == '5')
            a[i] = '6';
    }
    for (int i = 0; i < b.length(); ++i) {
        if (b[i] == '5')
            b[i] = '6';
    }
    long long x = stoll(a), y = stoll(b);
    return x + y;
}
void Process(){
    string a, b;
    cin >> a >> b;
    cout << Min(a, b) << " " << Max(a, b) << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    