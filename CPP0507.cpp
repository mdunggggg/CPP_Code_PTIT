/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
struct PhanSo
{
    long long p , q;
};
void nhap(PhanSo &x){
    cin >> x.p >> x.q;
}
void in(PhanSo x){
    cout << x.p << '/' << x.q;
}
PhanSo tong(PhanSo a , PhanSo b){
    PhanSo t;
     t.q = a.q/__gcd(a.q, b.q) * b.q;
     t.p = a.p *(t.q / a.q) + b.p *(t.q / b.q);
     long long cur = __gcd(t.q, t.p);
     t.q /= cur;
     t.p /= cur;
     return t;   
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}