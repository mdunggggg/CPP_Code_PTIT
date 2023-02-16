/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
char a[25][25];
bool check(int x,int y,int k){
	for(int i = x ; i < x + k ; i++){
		if(a[i][y] == 'O'||a[i][y + k - 1] == 'O') return 0; 
	}
	for(int i = y ; i < y + k ; i++){
		if(a[x][i] == 'O'||a[x + k - 1][i]=='O') return 0;
	}
	return 1;
}
void Process(){
    int n ; cin >> n ;
    for ( int i = 0 ; i < n ; ++i){
        for ( int j = 0 ; j < n ; ++j){
            cin >> a[i][j];
        }
    }
    for(int k = n ; k >= 1 ; k--){
			int flag = 0;
			for(int i = 0 ; i <= n - k ; i++){
				for(int j = 0 ; j <= n - k ; j++){
					if(check(i,j,k)){
						flag = 1;
						break;
					}
				}
				if(flag == 1) break;
			}
			if(flag == 1){
				cout << k << '\n';
				break;
			}
		}
}  
int main(){
    Faster();
    int t;
    cin >> t;
    while(t--)
        Process();
}
    