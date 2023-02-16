/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
struct Staff
{
    int stt;
    string msv, ten, lop, email, cty;

    void input() {
        getline(cin, msv);
        getline(cin, ten);
        getline(cin, lop);
        getline(cin, email);
        getline(cin, cty);
    }

    void output() {
        cout << stt << " " << msv << " " << ten << " " << lop << " " << email << " " << cty << endl;
    }
};

bool cmp(Staff a, Staff b)
{
    return a.ten < b.ten;
}

void testCase(Staff a[], int n)
{
    string s;
    cin >> s;
    for (int i = 0; i < n; ++i) {
        if (a[i].cty == s)
            a[i].output();
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    Staff a[n];
    for (int i = 0; i < n; ++i) {
        a[i].stt = i + 1;
        a[i].input();
    }
    sort(a, a + n, cmp);
    int q;
    cin >> q;
    while (q--) {
        testCase(a, n);
    }
    return 0;
}