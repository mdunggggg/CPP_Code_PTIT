/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    string a;
	ifstream input;
	ofstream output;
	input.open("PTIT.in");
	output.open("PTIT.out");
	while(!input.eof()){
    	getline(input,a);
    	output << a;
    	output << "\n";
	}
	input.close();
	output.close();
}
int main(){
    Faster();
    int t; cin >> t;
        Process();
}
    