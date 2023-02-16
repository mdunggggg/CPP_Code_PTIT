/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n , m ;
void Process(){
    cin >> n >> m ;
    int a[n + 5][m + 5];
    for ( int i = 1 ; i <= n ; ++i){
    	for ( int j = 1 ; j <= m ; ++j){
    		cin >> a[i][j];
		}
	}
	bool move = true;
	int row = 1, col = 2;
	cout  << a[1][1] << ' ';
	while(true){
		if ( move == true){
			while ( row <= n && col >= 1 ){
				cout << a[row][col] << ' ';
				row += 1;
				col--;
			}
			move = false;
			if ( row > n){
				row = n;
				col += 2;
			}
			else{
				col += 1;
			}
		}
		else{
			while ( col <= m && row >= 1){
				cout << a[row][col] << ' ';
				row--;
				col++;
			}
			move = true;
			if ( col > m){
				col = m;
				row += 2;
			}
			else{
				row += 1;
			}
		}
		if ( col == m && row == n) break;
	}
	cout << a[n][m] << '\n';
}  
int main(){
    Faster();
    int t;
    cin >> t;
    while(t--)
        Process();
}
    