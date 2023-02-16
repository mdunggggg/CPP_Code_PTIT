/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    ifstream fi;
    fi.open("DATA.in");
    map<int,int>mp;
    int x;
    while(fi >> x){
        mp[x]++;
    }
    fi.close();
    for(auto it : mp){
        cout << it.first << ' ' << it.second << '\n';
    }
}
int main(){
    Faster();
        Process();
}
    