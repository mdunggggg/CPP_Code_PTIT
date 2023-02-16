/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n, m, x;
    set<int> s1, s2;
    ifstream fi;
    fi.open("DATA.in");

    fi >> n >> m;
    for (int i = 0; i < n; ++i) {
        fi >> x;
        s1.insert(x);
    }
    for (int i = 0; i < m; ++i) {
        fi >> x;
        s2.insert(x);
    }
    
    map<int, int> mp;
    for (auto x : s1) mp[x]++;
    for (auto x : s2) mp[x]++;

    for (auto x: mp) {
        if (x.second == 2)
            cout << x.first << " ";
    }
}
int main(){
    Faster();
        Process();
}
    