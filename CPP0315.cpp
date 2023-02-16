/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    string s;
    cin >> s;
    int i = s.length() - 2, j = i + 1;
    while (s[i] <= s[i + 1]) i--;
    if (i < 0) {
        cout << "-1\n";
        return;
    }
    while (s[j] >= s[i]) j--;
    while (s[j] == s[j - 1]) j--;
    swap(s[i], s[j]);
    cout << s << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    