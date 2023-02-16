/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
struct SinhVien{
    string id, name, clas;
    double x , y, z;
    int num;
};
void nhap(SinhVien &x){
    cin >> x.id;
    getline(cin >> ws, x.name);
    cin >> x.clas >> x.x >> x.y >> x.z;
}
void sap_xep(SinhVien ds[], int n){
    sort(ds, ds + n ,[](SinhVien x, SinhVien y){
        return x.id < y.id;
    });
}
void in_ds(SinhVien ds[], int n){
    cout << fixed << setprecision(1);
    for(int i = 0 ; i < n ; ++i){
        cout << i + 1 << ' ' << ds[i].id << ' ' << ds[i].name << ' ' << ds[i].clas << ' ' << ds[i].x << ' ' << ds[i].y << ' ' << ds[i].z << '\n';
    }
}
int main()
{
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;

}
    