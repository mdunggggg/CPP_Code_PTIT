/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    string str, s;
    getline(cin >> ws, str);
    stringstream ss(str);
    vector<int> even, odd;
    while (ss >> s)
    {
        int x = stoi(s);
        if (x % 2 == 0)
            even.push_back(x);
        else
            odd.push_back(x);
    }
    if ((even.size() + odd.size()) % 2 == 0 && even.size() > odd.size())
        cout << "YES\n";
    else if ((even.size() + odd.size()) % 2 == 1 && odd.size() > even.size())
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    