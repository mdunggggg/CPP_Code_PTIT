/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
struct Student
{
    string msv, name, lop;
    double d1, d2, d3;

    void input() {
        cin.ignore();
        getline(cin, msv);
        getline(cin, name);
        getline(cin, lop);
        cin >> d1 >> d2 >> d3;
    }

    void output() {
        cout << msv << " " << name << " " << lop << " ";
        cout << fixed << setprecision(1) << d1 << " " << d2 << " " << d3 << endl;
    }
};

bool cmp(Student a, Student b)
{
    return a.name < b.name;
}

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; ++i) {
        a[i].input();
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; ++i) {
        cout << i + 1 << " ";
        a[i].output();
    }
    return 0;
}