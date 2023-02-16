/*  Hoang Manh Dung - D21 ProPTIT  */

/*
    Source: https://www.geeksforgeeks.org/program-for-rank-of-matrix/
*/
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

void Process(){
   int R, C;
        cin >> R >> C;
        int mat[R][C];
        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < C; j++)
                cin >> mat[i][j];
        }
        int rank = C;
        for (int row = 0; row < rank; row++)
        {
            if (mat[row][row])
            {
                for (int col = 0; col < R; col++)
                {
                    if (col != row)
                    {
                        double mult = (double)mat[col][row] / mat[row][row];
                        for (int i = 0; i < rank; i++)
                            mat[col][i] -= mult * mat[row][i];
                    }
                }
            }
            else
            {
                bool reduce = true;
                for (int i = row + 1; i < R; i++)
                {
                    if (mat[i][row])
                    {
                        for (int j = 0; j < rank; j++)
                        {
                            int temp = mat[row][j];
                            mat[row][j] = mat[i][j];
                            mat[i][j] = temp;
                        }
                        reduce = false;
                        break;
                    }
                }
                if (reduce)
                {
                    rank--;
                    for (int i = 0; i < R; i++)
                        mat[i][row] = mat[i][rank];
                }
                row--;
            }
        }
        cout << rank << '\n';
}  
int main(){
    Faster();
    int t;
    cin >> t;
    while(t--)
        Process();
}
    