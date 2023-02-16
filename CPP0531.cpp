/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
struct Point
{
    int x , y, z;
};

void Process(){
    Point p[4];
    for(int i = 0 ; i < 4 ; ++i){
        cin >> p[i].x >> p[i].y >> p[i].z;
    }
    vector<Point>v;
    v.push_back({p[1].x - p[0].x , p[1].y - p[0].y , p[1].z - p[0].z});
    v.push_back({p[2].x - p[0].x , p[2].y - p[0].y , p[2].z - p[0].z});
    v.push_back({p[3].x - p[0].x , p[3].y - p[0].y , p[3].z - p[0].z});
    Point n = {v[0].y * v[1].z - v[0].z * v[1].y, v[0].z * v[1].x - v[0].x * v[1].z , v[0].x * v[1].y - v[0].y * v[1].x};
    if(v[2].x * n.x + v[2].y * n.y + v[2].z * n.z == 0) cout << "YES";
    else cout << "NO";
    cout << '\n';

}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    