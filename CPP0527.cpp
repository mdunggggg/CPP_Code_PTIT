/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
struct Time{
    int x , y , z;
};
bool cmp(Time a , Time b){
    if(a.x == b.x){
        if(a.y == b.y){
            return a.z < b.z;
        }
        return a.y < b.y;
    }
    return a.x < b.x;
}
void Process(){
    int n ; cin >> n;
    struct Time a[n];
    for(int i = 0 ; i < n ; ++i){
        cin >> a[i].x >> a[i].y >> a[i].z;
    }
    sort(a, a + n, cmp);
    for(int i = 0 ; i < n ; ++i){
        cout << a[i].x << ' ' << a[i].y << ' ' << a[i].z << '\n';
    }
}
int main(){
    Faster();
    // int t; cin >> t;
    // while(t--)
        Process();
}
    