/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n ; cin >> n;
    int cur;
    map<int,int>mp;
    for(int i = 1 ; i <= n; ++i){
        cin >> cur;
        mp[cur]++;
    }
    vector<pair<int,int>>v;
    for(auto &it : mp){
        v.push_back(it);
    }
    sort(v.begin(), v.end(), [](pair<int,int>a , pair<int,int>b){
        if(a.second == b.second){
            return a.first < b.first;
        }
        return a.second > b.second;
    });
    for(int i = 0; i < v.size(); ++i){
        for(int j = 0 ; j < v[i].second; ++j){
            cout << v[i].first << ' ';
        }
    }
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    