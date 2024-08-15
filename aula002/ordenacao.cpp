#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// Ordenação: dada uma sequência de inteiros, imprima-os em ordem não-descrente.

/*
    exemplo de entrada: 
    4
    6 2 4 2
    exemplo de saída:
    2 2 4 6

    O que queremos é ordenar a entrada:
    transformar o vetor de entrada v de maneira que, para todo 0 <= i < n,
    v[i] <= v[i + 1].

*/

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    // ordenando 
    for(int inicio = 0; inicio < n-1; ++inicio){
        int idx = inicio;
        for(int i = inicio + 1; i < n; ++i){
            if(v[i] < v[idx]){
                idx = i;
            }
        }
        swap(v[inicio], v[idx]);     // troca os dois valores
    }

    // imprimindo a saída
    for(int i = 0; i < n; ++i){
        cout << v[i] << " \n"[i+1 == n];
    }

}

 