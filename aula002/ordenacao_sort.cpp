#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// Algoritmo O(n log n)

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    // ordenando
    sort(v.begin(), v.end());      // início e fim da faixa de valores que se quer ordenar
    // begin aponta para o primeiro elemento do vetor, end aponta para o último + 1.

    // imprimindo a saída
    for(int i = 0; i < n; ++i){
        cout << v[i] << " \n"[i+1 == n];
    }
}