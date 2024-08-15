#include<iostream>
#include<bits/stdc++.h>

using namespace std; 

// Busca binária


int main(){
    int x = 2;

    vector<int> v = {0, 1, 2, 3};

    /* 
        lower_bound: diz qual o menor elemento que é maior ou igual o valor buscado
        ex: 2 2 4 6 - lower_bound de 4 retorna o iterador que aponta para o 4.
    */
    /*
        upper_bound: menor elemento maior que o valor buscado
        ex: 2 2 4 6 - upper_bound de 4 é 6.
   */
    

    int i = lower_bound(v.begin(), v.end(), x) - v.begin(); // 1º < x
    int j = upper_bound(v.begin(), v.end(), x) - v.begin(); // 1º > x

    cout << "lower bound: " << v[i] << "\n";
    cout << "upper bound: " << v[j] << "\n";
}