/*
PORTAS (Torneio Feminino de Computação 2022)

Ada está participando do Torneio Feminino de Cartas (TFC). No TFC a participante passa em frente a um corredor com 𝑁 portas numeradas sequencialmente de 1 até N. Atrás de cada porta há um baú inicialmente vazio.

Antes do jogo começar k assistentes passam. Cada uma delas anuncia três números L, R e X, e adiciona uma carta de valor X em cada baú atrás de cada porta de L até R.

Quando o jogo começa, Ada escolhe duas portas i e j, i≤j, ela entra no corredor pela porta i e segue o caminho para a direita pegando todas as cartas que estão em baús atrás das portas entre 
i e j.

A pontuação da participante é dada pela soma dos valores de todas as cartas que ela pegou. Qual a maior pontuação que Ada pode obter?

Entrada
A primeira linha de entrada contém dois inteiros N e K representando o múmero de assistentes. Cada uma das K linhas seguintes possui 3 inteiros. Li, Ri e Xi, os números anunciados pela i-ésima assistente.

Saída
Sua saída deve conter um inteiro A, a maior pontuação que Ada pode obter.

Exemplo de Entrada	
3 3
1 3 2
1 2 -4
2 3 -3

Exemplo de Saída
-1

*/

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int maxn = 1e6 + 10, inf = 1e9 + 10;

int n, k, v[maxn], pref[maxn];  // v[maxn] = vetor para guardar o quanto tá incrementando e decrementando
                                // pref[maxn] = guarda o valor final de cada posição do array
ll pref2[maxn];       // guarda a soma de cada prefixo

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;

    while(k--){
        int l, r, x;
        cin >> l >> r >> x;
        v[l] += x;
        v[r + 1] -= x;
    }

    for(int i = 1; i <= n; i++){
        pref[i] = pref[i + 1] + v[i];  // guarda o valor final de cada posição array
    }
    for(int i = 1; i <= n; i++){
        pref2[i] = pref2[i - 1] + pref[i];  // guarda a soma do prefixo do valor do pref2
    }

    ll menor = 0;
    ll resp = -inf;

    for(int i = 1; i <= n; i++){
        resp = max(resp,pref2[i] - menor);
        menor = min(menor, pref2[i]);
    }

    cout << resp << "\n";

    return 0;
}