/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int stt = 1;

class SinhVien {
public:
    string msv, name, lop, date;
    float gpa;

    friend istream &operator >> (istream &is, SinhVien &a) {
        scanf("\n");
        getline(is, a.name);
        is >> a.lop >> a.date >> a.gpa;

        string str = "", temp;
        stringstream ss(a.name);
        while (ss >> temp) {
            transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
            temp[0] = toupper(temp[0]);
            str += temp + " ";
        }
        str.pop_back();
        a.name = str;

        string s = to_string(stt++);
        while (s.length() < 3)
            s = '0' + s;
        a.msv = "B20DCCN" + s;

        if (a.date[2] != '/') a.date.insert(0, "0");
        if (a.date[5] != '/') a.date.insert(3, "0");
        return is;
    }

    friend ostream &operator << (ostream &os, SinhVien a) {
        os << a.msv << " " << a.name << " " << a.lop << " " << a.date << " ";
        os << fixed << setprecision(2) << a.gpa << "\n";
        return os;
    }
};

bool cmp(SinhVien a, SinhVien b) {
    return a.gpa > b.gpa;
}

void sapxep(SinhVien ds[], int N) {
    sort(ds, ds + N, cmp);
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}