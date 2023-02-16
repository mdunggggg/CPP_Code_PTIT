/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
struct PhanSo{
    long long tu, mau;
	friend  void show(PhanSo A){
		cout << A.tu << '/' << A.mau;
	}
	friend  void RutGon(PhanSo &x){
		long long gcd = __gcd(x.tu, x.mau);
		x.tu /= gcd;
		x.mau /= gcd;
	}
	friend PhanSo Add(PhanSo A , PhanSo B){
		PhanSo res;
		res.mau = A.mau/__gcd(A.mau, B.mau) * B.mau;
		res.tu = A.tu * (res.mau/A.mau) + B.tu * (res.mau / B.mau);
		RutGon(res); 
		res.mau *= res.mau;
		res.tu *= res.tu;
		return res;
	}
	friend void Solve(PhanSo A, PhanSo B){
		PhanSo res = Add(A, B);
		show(res);
		res.mau = res.mau * A.mau * B.mau;
		res.tu = res.tu * A.tu * B.tu;
		RutGon(res);
		cout << ' ';
		show(res);
		cout << '\n';
	}
	
};
void process(PhanSo A, PhanSo B){
    RutGon(A);
	RutGon(B);
	Solve(A, B);
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
} 