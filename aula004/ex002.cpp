#include<iostream>
#include<vector>

#define MAXN (int) (2e5 + 10)
#define INF (int) (1e9 + 10)

using namespace std;

int n, m, a[MAXN], b[MAXN];

int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= m; i++){
        cin >> b[i];
    }

    a[n+1] = b[m+1] = INF; // valores grandes para serem ignorados pelo algoritmo

    vector<int> resp;    // vetor resposta
    int i1 = 1, i2 = 1;  // ponteiros

    while(i1 <= n || i2 <= m){
        if(a[i1] < b[i2]){
            resp.push_back(a[i1++]);
        }else{
            resp.push_back(b[i2++]);
        }
    }

    for(int x : resp){
        cout << x << " ";
    }

    cout << endl;

}