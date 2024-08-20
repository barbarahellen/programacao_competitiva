/*
Soma (OBI 2019)
Temos uma sequência de N quadrados desenhados lado a lado. Cada quadrado possui um número natural anotado dentro dele. Dados a sequência dos N quadrados e um valor K, quantos retângulos distintos existem cuja soma dos números dentro do retângulo é exatamente igual a K? Por exemplo, a figura mostra uma sequência de N = 10 quadrados para a qual existem 5 retângulos cuja soma dos números é igual a K = 4.


Entrada
A primeira linha da entrada contém dois inteiros N e K representando o número de quadrados na sequência e o valor da soma desejada. A segunda linha da entrada contém N números naturais Xi, para 1 ≤ i ≤ N, indicando a sequência de números anotados dentro dos quadrados.

Saída
Seu programa deve imprimir uma linha contendo um número inteiro representando quantos retângulos existem na sequência cuja soma é igual a K.

Restrições
1 ≤ N ≤ 500000 (5 x 105)
0 ≤ K ≤ 106
0 ≤ Xi ≤ 100 para 1 ≤ i ≤ N

Informações sobre a pontuação
Em um conjunto de casos de teste somando 10 pontos, N ≤ 500
Em um conjunto de casos de teste somando 20 pontos, N ≤ 104
Em um conjunto de casos de teste somando 30 pontos, K>0 e Xi>0 para 1 ≤ i ≤ N
Em um conjunto de casos de teste somando 40 pontos, nenhuma restrição adicional (\sl note que para esta subtarefa o inteiro da saída pode não caber em 32 bits.)

Exemplos:

Entrada
10 4
2 0 1 1 0 0 8 4 1 3

Saída
5

Entrada
15 0
0 0 0 0 0 5 12 0 1 0 0 0 51 0 0

Saída
25
*/

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int n, k;
ll resp;
map<int, int> freq;

int main(){
    cin >> n >> k;

    vector<int> v(n + 1), pref(n + 1);

    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }
    pref[0] = 0;

    for(int i = 1; i <= n; i++){
        pref[i] = pref[i - 1] + v[i];
        if(pref[i] == k){
            resp++;
        }
        resp += freq[pref[i] - k];
        freq[pref[i]]++;
    }

    cout << resp << "\n";
    return 0;
}