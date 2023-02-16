/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
class SinhVien {
public:
    string msv, name, lop, email;

    friend istream &operator >> (istream &is, SinhVien &a) {
        scanf("\n");
        getline(cin, a.msv);
        getline(cin, a.name);
        getline(cin, a.lop);
        getline(cin, a.email);
        return is;
    }

    friend ostream &operator << (ostream &os, SinhVien a) {
        cout << a.msv << " " << a.name << " " << a.lop << " " << a.email << "\n";
        return os;
    }
};

string cmp(string s) {
    if (s == "Ke toan") return "KT";
    if (s == "Cong nghe thong tin") return "CN";
    if (s == "An toan thong tin") return "AT";
    if (s == "Vien thong") return "VT";
    if (s == "Dien tu") return "DT";
}

int main() {
    int n;
    cin >> n;

    SinhVien a[1000];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int q;
    cin >> q;
    while (q--) {
        scanf("\n");
        string s;
        getline(cin, s);

        string major = cmp(s);
        transform(s.begin(), s.end(), s.begin(), ::toupper);

        cout << "DANH SACH SINH VIEN NGANH " << s << ":\n";
        for (int i = 0; i < n; ++i) {
            if (major == "CN" || major == "AT") {
                if (a[i].msv[5] == major[0] && a[i].msv[6] == major[1] && a[i].lop[0] != 'E')
                    cout << a[i];
            }
            else {
                if (a[i].msv[5] == major[0] && a[i].msv[6] == major[1])
                    cout << a[i];
            }
        }
    }
    return 0;
}
