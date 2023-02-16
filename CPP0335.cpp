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
    int r = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            int p = i + 1;
            while (s[p] >= '0' && s[p] <= '9')
                p++;
            string t = s.substr(i, p - i);
            r = max(r, stoi(t));
            i = p;
        }
    }
    cout << r << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    