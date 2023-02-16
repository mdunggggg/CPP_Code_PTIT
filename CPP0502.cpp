/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
struct ThiSinh{
    string name, birth;
    double x , y , z;
};
void nhap(ThiSinh &x){
    getline(cin >> ws, x.name);  
    getline(cin >> ws, x.birth);
    cin >> x.x >> x.y >> x.z;  
}
void in(ThiSinh a){
    cout << fixed << setprecision(1);
    cout << a.name << ' ' << a.birth << ' ' << a.x + a.y + a.z;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}