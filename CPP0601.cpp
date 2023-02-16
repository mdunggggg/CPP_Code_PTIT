/*  Hoang Manh Dung - D21 ProPTIT  */

#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;  

class SinhVien
{
private:
    string msv, name, lop, ns;
    float gpa;

public:
    SinhVien();
    void nhap();
    void xuat();
};
SinhVien::SinhVien()
{
    this->msv = "B20DCCN001";
    this->name = "";
    this->lop = "";
    this->ns = "";
    this->gpa = 0;
}
void SinhVien::nhap()
{
    getline(cin, name);
    getline(cin, lop);
    getline(cin, ns);
    cin >> gpa;
    if (ns[2] != '/')
        ns.insert(ns.begin(), '0');
    if (ns[5] != '/')
        ns.insert(ns.begin() + 3, '0');
}
void SinhVien::xuat()
{
    cout << msv << " " << name << " " << lop << " " << ns << " " << fixed << setprecision(2) << gpa;
}
int main()
{
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}