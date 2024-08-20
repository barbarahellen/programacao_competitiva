#include<iostream>
#define MAXN (int) (1e5 + 10)
#define INF (int) (1e9)
#define int long long

using namespace std;

int n, m, arr[MAXN];

int32_t main(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    
    int soma = 0, resp = INF, l = 1;

    for(int r = 1; r <= n; r++){
        soma += arr[r];
        while(soma - arr[l] >= m){
            soma -= arr[l];
            l++;
        }
        if(soma >= m){
            resp = min(resp, r-l+1);
        }
    }
    cout << (resp == INF ? -1 : resp) << endl;

}
