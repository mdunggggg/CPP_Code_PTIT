/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
class PhanSo {
private:
    long long x, y;

public:
    PhanSo(long long x, long long y){};
	PhanSo(){};
    void rutgon() {
        long long uc = __gcd(x, y);
        x /= uc;
        y /= uc;
    }

    friend istream &operator >> (istream &is, PhanSo &A) {
        return is >> A.x >> A.y;
    }

    friend ostream &operator << (ostream &os, PhanSo A) {
        return os << A.x << "/" << A.y;
    }

    PhanSo operator + (PhanSo B) {
        PhanSo A;
        A.x = x * B.y + B.x * y;
        A.y = y * B.y;
        A.rutgon();
        return A;
    }
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}