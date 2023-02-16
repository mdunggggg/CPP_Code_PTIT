/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int a[50][50];
/*
n = 2;
1 2 3 4 5 6 7 8
9 10 11 12 13 14 15 16
17 18 19 20 21 22 23 24
25 26 27 28 29 30 31 32
33 34 35 36 37 38 39 40
41 42 43 44 45 46 47 48
49 50 51 52 53 54 55 56
57 58 59 60 61 62 63 64
cuon 1: 36 28 20 21 22 30 38 46 54 53 52 51 50 42 34 26 18 10 2 3 4 5 6 7 8 16 24 32 40
48 56 64
cuon 2: 29 37 45 44 43 35 27 19 11 12 13 14 15 23 31 39 47 55 63 62 61 60 59 58 57 49 41
33 25 17 9 1

    ta tim cuon thu 2(COL_A) truoc;
    sau do COL_B[i] = 4*n*4*n - COL_A[i] + 1;
    
*/

void Process(){
    int n; cin >> n;
    int cnt = 0;
    for (int i = 0; i < 4 * n; i++){
        for (int j = 0; j < 4 * n; j++)
            a[i][j] = ++cnt;
    }
    int size = 4 * n * 4 * n;
    vector<int>col_A, col_B;
    int col_start = 4 * n, row_start = 4 * n - 2, col_end = 4 * n - 2, row_end = 4 * n - 4;
    int value = 1 - 4 * n;
    while( col_A.size() < size/2 ){
        for ( int i = 0 ; i < col_start ; i++){
            value += 4 * n;
            col_A.emplace_back(value);
        }
        for ( int i = 0 ; i < row_start ; i++){
            value++;
            col_A.emplace_back(value);
        }
        for ( int i = 0 ; i < col_end ; i++){
            value -= 4 * n;
            col_A.emplace_back(value);
        }
        for ( int i = 0 ; i < row_end; i++){
            value--;
            col_A.emplace_back(value);
        }
        row_end -= 4;
        row_start -= 4;
        col_end -= 4;
        col_start -= 4;
    }
    reverse(col_A.begin(), col_A.end());
    for ( int i = 0 ; i < col_A.size() ; i++){
        col_B.emplace_back(size - col_A[i] + 1);
    }
    for ( int i = 0 ; i < col_B.size() ; i++){
        cout << col_B[i] << ' ';
    }
    cout << '\n';
    for ( int i = 0 ; i < col_A.size(); i++){
        cout << col_A[i] << ' ';
    }
    cout << '\n';
}  
int main(){
    Faster();
    int t;
    cin >> t;
    while(t--)
        Process();
}
    