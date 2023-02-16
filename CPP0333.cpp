/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
   string s; getline(cin , s);
   vector<string>res;
   stringstream ss(s);
   string token;
   while(ss >> token){
        transform(token.begin(), token.end(), token.begin(), ::tolower);
        token[0] -= 32;
        res.emplace_back(token);
   }
   for ( int i = 0 ; i < res.size() - 2; ++i){
        cout << res[i] << ' ';
   }
   cout << res[res.size() - 2] << ", ";
   transform(res[res.size() - 1].begin(), res[res.size() - 1].end(), res[res.size() - 1].begin(), ::toupper);
   cout << res[res.size() - 1];
}
int main(){
    Faster();
        Process();
}
    