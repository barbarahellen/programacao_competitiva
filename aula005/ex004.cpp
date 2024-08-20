/*
Forest Queries

You are given an n x n grid representing the map of a forest. Each square is either empty or contains a tree. The upper-left square has coordinates (1,1), and the lower-right square has coordinates (n,n).
Your task is to process q queries of the form: how many trees are inside a given rectangle in the forest?

Input
The first input line has two integers n and q: the size of the forest and the number of queries.
Then, there are n lines describing the forest. Each line has n characters: . is an empty square and * is a tree.
Finally, there are q lines describing the queries. Each line has four integers y1, x1, y2, x2 corresponding to the corners of a rectangle.

Output
Print the number of trees inside each rectangle.

Constraints:
1 <= n <= 1000
1 <= q <= 2 * 10⁵

Example
Input:
4 3
.*..
*.**
**..
****
2 2 3 4
3 1 3 1
1 1 2 2

Output:
3
1
2
*/

#include<bits/stdc++.h>

using namespace std;

const int maxn = 1e3 + 10;

int n, q; 
int m[maxn][maxn];
int pref[maxn][maxn];

int main(){
    cin >> n >> q;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            char c;
            cin >> c;
            if(c == '.'){
                m[i][j] = 0;
            }else{
                m[i][j] = 1;
            }
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            pref[i][j] = pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1] + m[i][j];
        }
    }

    while(q--){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << pref[x2][y2] - pref[x2][y1 - 1] - pref[x1 - 1][y2] + pref[x1 - 1][y1 - 1] << "\n";
    }

    return 0;
}