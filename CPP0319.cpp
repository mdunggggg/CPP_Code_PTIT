/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int m , s; cin >> m >> s;
    if ( 9 * m < s || (m > 1 && s == 0)){
        cout << "-1 -1";
        return;
    }
    int ss = s;
    ss -= 1;
    int Max[m], Min[m];
    for ( int i = 0 ; i < m ; ++i){
        if(s > 9){
            Max[i] = 9;
            s -= 9;
        }
        else{
            Max[i] = s;
            s -= s;
        }
    }
    for ( int i = m - 1 ; i >= 0 ; --i){
        if(ss > 9){
            Min[i] = 9;
            ss -= 9;
        }
        else{
            Min[i] = ss;
            ss -= ss;
        }
    }
    Min[0] += 1;
    for ( int x : Min) cout << x ;
    cout << ' ';
    for ( int x : Max) cout << x;

}
int main(){
    Faster();

        Process();
}
    