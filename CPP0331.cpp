/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
string add( string a , string b){
	while ( a.size() < b.size()) a = '0' + a;
	while ( b.size() < a.size()) b = '0' + b;
	string ans = "";
	int remember = 0;
	for ( int i = a.size() - 1 ; i >= 0 ; i--){
		remember = remember + a[i] + b[i] - 2 * '0';
		char tmp = remember % 10 + '0';
		ans = tmp + ans;
		remember = remember / 10;
	}
	if ( remember) ans = char(remember + '0') + ans;
	return ans;

}
bool checkSumStrUtil(string str, int beg, int len1, int len2)
{
    string s1 = str.substr(beg, len1);
    string s2 = str.substr(beg + len1, len2);
    string s3 = add(s1, s2);
    int s3_len = s3.size();
    if (s3_len > str.size() - len1 - len2 - beg)
        return false;
    if (s3 == str.substr(beg + len1 + len2, s3_len))
    {
        if (beg + len1 + len2 + s3_len == str.size())
            return true;
        return checkSumStrUtil(str, beg + len1, len2, s3_len);
    }
    return false;
}
bool isSumStr(string str)
{
    int n = str.size();
    for (int i = 1; i < n; i++)
        for (int j = 1; i + j < n; j++)
            if (checkSumStrUtil(str, 0, i, j))
                return true;
    return false;
}
void Process(){
    string s; cin >> s;
     if (isSumStr(s))
        cout << "Yes\n";
    else
        cout << "No\n";
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    