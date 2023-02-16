/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
	int n ; cin >> n;
	vector<string>v(n);
	vector<pair<string,int>>vv;
	map<string, int>mp;
	for(auto &s : v){
		cin >> s;
		mp[s]++;
	}
	for(auto it : mp){
		vv.push_back(it);
	}
	n = vv.size();
	long long res = 0;
	for(int i = 0 ; i < n ; ++i){
		res += vv[i].second * (vv[i].second - 1);
	}
	//cout << res << '\n';
	for(int i = 0 ; i < n ; ++i){
		for(int j = i + 1 ; j < n ; ++j){
			if(vv[i].first.find(vv[j].first) != string::npos){
				res += vv[i].second * vv[j].second;
			}
			if(vv[j].first.find(vv[i].first) != string::npos){
				res += vv[i].second * vv[j].second;
			}
		}
	}
	cout << res << '\n';
}	
int main(){
	Faster();
		Process();
}
	