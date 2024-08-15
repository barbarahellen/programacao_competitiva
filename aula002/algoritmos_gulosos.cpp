// Algoritmos gulosos (guloso, ganancioso ou greedy)

/*
    Construir a solução ótima a partir de escolhas ótimas localmente sem desfazer escolhas passadas.
        - Muitas vezes intuitivo
        - Muitas vezes difícil de provar
        - As vezes, a estratégia gulosa pode ser complicada
*/

/*
    Problema: Movie festival

    em um festival de filmes, n filmes serão mostrados.
    Você sabe os horários de início e fim de cada filme.
    Qual é o máximo de filmes que você pode assistir inteiros?

*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std; 

int main(){
    int n;
    cin >> n;

    vector<pair<int, int>> filmes;    // pair é uma estrutura onde se guarda 2 valores que não precisam ser do mesmo tipo

    for(int i = 0; i < n; ++i){
        int inicio, fim;
        cin >> inicio >> fim;
        filmes.push_back(make_pair(fim, inicio));  // colocando o fim do filme no primeiro elemento e o início no segundo
    }

    sort(filmes.begin(), filmes.end());     

    int t = -1, ans = 0;       // próximo momento livre pra ver um filme; ans = quantos filmes foram vistos
    
    for(int i = 0; i < n; ++i){
        int inicio = filmes[i].second,
            fim = filmes[i].first;
        if(inicio < t){
            continue;
        }
        ans++;
        t = fim;
    }

    cout << ans << '\n';
}