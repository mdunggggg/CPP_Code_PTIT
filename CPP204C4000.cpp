/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
struct SinhVien {
    string msv, name, dob, lop;
    float gpa;
};

void nhapThongTinSV(SinhVien &a) {
    a.msv = "N20DCCN001";
    getline(cin, a.name);
    cin >> a.lop >> a.dob >> a.gpa;
    if (a.dob[2] != '/') a.dob.insert(0, "0");
    if (a.dob[5] != '/') a.dob.insert(3, "0");
}

void inThongTinSV(SinhVien a) {
    cout << a.msv << " " << a.name << " " << a.lop << " " << a.dob << " ";
    cout << fixed << setprecision(2) << a.gpa;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}