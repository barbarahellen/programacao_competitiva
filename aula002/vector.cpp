#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// vector: array com tamanho dinâmico

// é declarado como:
// vector<tipo> nome_do_vetor;

/*
    Gerência de memória fica por baixo dos panos:
    - push_back(): O(1) amortizado - adiciona um elemento no final
    - pop_back(): O(1) amortizado  - remove um elemento do final
    - clear(): O(1)
*/


signed main(){

    vector<int> v;            
 
    for(int i = 0; i < 5; i++){
        v.push_back(i);          // adiciona elemento no final
    }

    // imprime: 0 1 2 3 4 5
    for(int i = 0; i < v.size(); ++i)
        cout << v[i] << ' ';         // v[0], v[1], v[2], ..., v[v.size()-1]
    cout << '\n';

    // outra forma de inicializar vector
    int n = 4;
    vector<int> a(3),   // {0, 0, 0}
                b(n);   // {0, 0, 0, 0}

    a.push_back(5);     // adiciona um elemento ao fim de a
    b.pop_back();       // remove um elemento do fim de b

    cout << a.size() << '\n'; // 4
    cout << b.size() << '\n'; // 3

    a.clear();     // remove todos os elementos do vetor
    a.pop_back();  // se o vetor já está sem nada, dá runtime error


    vector<int> c(3, -1);  // inicializa p vetor com 3 vezes o -1 = {-1, -1, -1}
    c[0] = 5;              // altera o 1º elemento: {5, -1, -1}
    for(int x : c)         // para cada x em c
        cout << x << ' ';
    cout << '\n';           

}