/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    string s;
    set<string> s1, s2;
    ifstream fi1, fi2;

    fi1.open("DATA1.in");
    while (fi1 >> s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s1.insert(s);
    }
    fi1.close();
    
    fi2.open("DATA2.in");
    while (fi2 >> s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s2.insert(s);
    }
    fi2.close();

    map<string, int> mp;
    for (auto x : s1) mp[x]++;
    for (auto x : s2) mp[x]++;
    
    for (auto x : mp) cout << x.first << " ";
    cout << '\n';

    for (auto x: mp) {
        if (x.second > 1)
            cout << x.first << " ";
    }
}
int main(){
    Faster();
        Process();
}
    