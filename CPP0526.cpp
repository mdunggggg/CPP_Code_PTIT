/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
struct Person
{
    string name, date;
    int d, m, y;

    void input() {
        cin >> name >> date;
        d = stoi(date.substr(0, 2));
        m = stoi(date.substr(3, 2));
        y = stoi(date.substr(6));
    }
};

bool cmp(Person a, Person b)
{
    if (a.y > b.y) return 1;
    if (a.y == b.y) {
        if (a.m > b.m) return 1;
        if (a.m == b.m) {
            if (a.d > b.d) return 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    Person a[n];
    for (int i = 0; i < n; ++i) {
        a[i].input();
    }

    sort(a, a + n, cmp);
    cout << a[0].name << endl << a[n - 1].name;
}