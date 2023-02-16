/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
      ifstream fi;
    fi.open("VANBAN.in");

    set<string> se;
    string s;
    while (fi >> s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        se.insert(s);
    }
    fi.close();

    for (auto s : se) {
        cout << s << '\n';
    }
}
int main(){
    Faster();
        Process();
}
    