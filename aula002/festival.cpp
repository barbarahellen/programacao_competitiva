/*
    Você recebe a data de festivais de fogos. Para cada dia de 1 até N, determine quantos dias faltam para o próximo festival. 
    Se houver um festival no próprio dia, considera-se que faltam 0 dias.
    É garantido que o último festival acontece no dia N.

    Entrada:
    3  2
    2  3

    Ou seja, o festival vai durar 3 dias, e vai ter 2 dias de lançamento de fogos (o 2º e o 3º dias).

    Saída:
    1
    0
    0

    Ou seja, a partir do primeiro dia, os fogos serão lançados no 2º dia, o que significa que falta um dia.
    A partir do 2º dia, os fogos serão lançados nesse dia, então faltam 0 dias.
    A partir do terceiro dia, os fogos também serão lançados nesse dia, então faltam 0 dias.

*/
#include<iostream>
#include<bits/stdc++.h>

using namespace std; 

int main(){

    int n, m; // n = num total de dias, m = dias de lançamentos de fogos

    cin >> n >> m;

    vector<int> a(m);   // preenche o vector com o num de dias
    
    for(int i = 0; i < m; ++i){
        cin >> a[i];
    }

    // se a não estivesse ordenado:
    // sort(a.begin(), a.end());

    for(int i = 1; i <= n; ++i){
        cout << (*lower_bound(a.begin(), a.end(), i) - i) << "\n";
    }
}