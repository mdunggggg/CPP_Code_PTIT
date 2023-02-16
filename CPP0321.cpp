/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
string sub( string a , string b){
    while ( a.size() < b.size()) a= '0' + a;
    while ( b.size() < a.size()) b= '0' + b;
    string ans = "";
    int remember = 0;
    for ( int i = a.size() - 1 ; i >= 0 ; i--){
         int so = a[i] - '0' - ( b[i] - '0') - remember;
         if ( so < 0 ) {
             so += 10;
             remember = 1;
         }
         else remember = 0;
         char k = so + '0';
         ans = k + ans;
     }
   // while( ans[0] == '0') ans.erase(ans.begin());
     if ( ans.size() == 0) ans = '0' + ans;
     return ans;
}
void Process(){
    string s , t;
    cin >> s >> t;
    if(s.size() > t.size() || (s.size() == t.size() && s > t)){
        cout << sub(s,t);
    } 
    else cout << sub(t,s);
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    