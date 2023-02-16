/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
struct NhanVien
{
    string id, name, gender, dob, address, tax, date;
};

string STT(int i)
{
    string r = to_string(i);
    while (r.length() < 5)
        r = '0' + r;
    return r;
}

void nhap(NhanVien &a)
{
    getline(cin >> ws, a.name);
    getline(cin >> ws, a.gender);
    getline(cin >> ws, a.dob);
    getline(cin >> ws, a.address);
    getline(cin >> ws, a.tax);
    getline(cin >> ws, a.date);
}

void inds(NhanVien ds[], int N)
{
    for (int i = 0; i < N; ++i) {
        cout << STT(i + 1) << " ";
        cout << ds[i].name << " " << ds[i].gender << " " << ds[i].dob << " " << ds[i].address << " " << ds[i].tax << " " << ds[i].date << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}