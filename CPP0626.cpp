/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

class GiangVien {
public:
    string id, fullName, boMon, ten, mon;

    friend istream &operator >> (istream &is, GiangVien &a) {
        scanf("\n");
        getline(cin, a.fullName);
        getline(cin, a.boMon);

        string s, res = "";
        stringstream ss(a.boMon);
        while (ss >> s) {
            res += toupper(s[0]);
        }
        a.mon = res;

        return is;
    }

    friend ostream &operator << (ostream &os, GiangVien a) {
        cout << a.id << " " << a.fullName << " " << a.mon << "\n";
        return os;
    }
};

int main() {
    int n;
    cin >> n;
    GiangVien a[100];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];

        a[i].id = "GV" + to_string(i + 1);
        if (i + 1 < 10) 
            a[i].id.insert(2, "0");
    }

    int q;
    cin >> q;
    scanf("\n");
    while (q--) {
        string str, s, res = "";
        getline(cin, str);
        stringstream ss(str);
        while (ss >> s) {
            res += toupper(s[0]);
        }

        cout << "DANH SACH GIANG VIEN BO MON " << res << ":\n";
        for (int i = 0; i < n; ++i) {
            if (a[i].mon == res)
                cout << a[i];
        }
    }
    return 0;
}