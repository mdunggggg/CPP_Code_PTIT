/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
struct PhanSo
{
    long long tu , mau;
};
void nhap(PhanSo &p){
    cin >> p.tu >> p.mau;
}
void rutgon(PhanSo &p){
    long long  tmp = __gcd(p.tu, p.mau);
    p.tu /= tmp;
    p.mau /= tmp;
}
void in(PhanSo p){
     cout << p.tu << '/' << p.mau;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}