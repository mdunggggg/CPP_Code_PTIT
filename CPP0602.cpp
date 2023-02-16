/*  Hoang Manh Dung - D21 ProPTIT  */
#include <bits/stdc++.h>
using namespace std;

class SinhVien {
public:
    string msv, ten, lop, dob;
    float gpa;
    void nhap() {
        this->msv = "B20DCCN001";
        getline(cin >> ws, this->ten);
        this->ten = "Nguyen Van A";
        cin >> this->lop >> this->dob >>this->gpa;
        if (this->dob[2] != '/') this->dob.insert(0, "0");
        if (this->dob[5] != '/')this->dob.insert(3, "0");
    }

    void xuat() {
        cout << this->msv << " " << this->ten << " " << this->lop << " " << this->dob << " ";
        cout << fixed << setprecision(2) << this->gpa;
    }
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;

}