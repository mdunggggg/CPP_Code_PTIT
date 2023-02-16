/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
struct Product
{
    int id;
    string name, type;
    float buy, sell, profit;

    void input() {
        scanf("\n");
        getline(cin, name);
        getline(cin, type);
        cin >> buy >> sell;
        profit = sell - buy;
    }

    void output() {
        cout << id << " " << name << " " << type << " ";
        cout << fixed << setprecision(2) << profit << endl;
    }
};

bool cmp(Product a, Product b)
{
    return a.profit > b.profit;
}

int main()
{
    int n;
    cin >> n;
    Product a[n];
    for (int i = 0; i < n; ++i) {
        a[i].id = i + 1;
        a[i].input();
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; ++i) {
        a[i].output();
    }
    return 0;
}