/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int stt = 1;

class NhanVien {
public:
    string mnv, name, gtinh, date, address, msthue, ngay;

    friend istream &operator >> (istream &is, NhanVien &a) {
        cin.ignore();
        getline(cin, a.name);
        cin >> a.gtinh >> a.date;
        cin.ignore();
        getline(cin, a.address);
        cin >> a.msthue >> a.ngay;
    
        // Chuẩn hóa mnv
        string s = to_string(stt++);
        while (s.length() < 5) {
            s = "0" + s;
        }
        a.mnv = s;
        return is;
    }

    friend ostream &operator << (ostream &os, NhanVien a) {
        cout << a.mnv << " " << a.name << " " << a.gtinh << " " << a.date << " " << a.address << " " << a.msthue << " " << a.ngay << "\n";
        return os;
    }
};

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}