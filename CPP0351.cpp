/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int type; cin >> type;
    string s; getline(cin >> ws, s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    stringstream ss(s);
    string token;
    vector<string>v;
    while(ss >> token){ 
        token[0] -= 32;
        v.emplace_back(token);
    }
    if(type == 1){
        cout << v.back() << ' ';
        for(int i = 0 ; i < v.size() - 1; ++i) cout << v[i] << ' ';
    }
    else{
        for ( int i = 1 ; i < v.size(); ++i) cout << v[i] << ' ';
        cout << v.front();
    }
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    