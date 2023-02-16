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
        res.emplace_back(token);
   }
   cout << res[res.size() - 1];
   for ( int i = 0 ; i < res.size() - 1; ++i){
        cout << res[i][0];
   }
   cout << "@ptit.edu.vn";
}
int main(){
    Faster();
        Process();
}
    