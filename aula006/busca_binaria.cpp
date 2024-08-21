#include<bits/stdc++.h>
using namespace std;

// código da busca binária
int busca(int x){
    int n;
    int v[100];
    int l = 0, r  = n - 1, mid;  // l = esquerda (início), r = direita (fim), mid = meio 

    while(l <= r){
        mid = (l + r)/2;
        if(v[mid] == x) return mid;
        if(v[mid] > x){
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    return -1; 
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int v[100];
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v, v + n); // ordena o vetor 

    int resposta = busca(14);  
    if(resposta == -1){
        cout << "14 não está no array\n";
    }else{
        cout << "14 está no array\n";
    }

    return 0;
}