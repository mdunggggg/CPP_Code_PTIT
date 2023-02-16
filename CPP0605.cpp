/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
class PhanSo {
private:
    long long tu, mau;

public:
    PhanSo(long long t, long long m) {};

    void rutgon() {
        long long uc = __gcd(tu, mau);
        tu /= uc;
        mau /= uc;
    }

    friend istream &operator >> (istream &in, PhanSo &A) {
        in >> A.tu >> A.mau;
        return in;
    }

    friend ostream &operator << (ostream &out, PhanSo A) {
        out << A.tu << "/" << A.mau;
        return out;
    }
};

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}