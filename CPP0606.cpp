/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
#define a() a
class NhanVien {
public:
    string mnv, ten, gtinh, nsinh, dchi, mthue, ngay;

    friend istream &operator >> (istream &is, NhanVien &a) {
        a.mnv = "00001";
        getline(is, a.ten);
        is >> a.gtinh >> a.nsinh;
        is.ignore();
        getline(is, a.dchi);
        is >> a.mthue >> a.ngay;
        return is;
    }

    friend ostream &operator << (ostream &os, NhanVien &a) {
        os << a.mnv << " " << a.ten << " " << a.gtinh << " " << a.nsinh << " " << a.dchi << " " << a.mthue << " " << a.ngay;
        return os;
    }
};

int main() {
    NhanVien a();
    cin >> a;
    cout << a;
    return 0;
}