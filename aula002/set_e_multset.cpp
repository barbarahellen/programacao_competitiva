#include<iostream>
#include<bits/stdc++.h>

using namespace std; 

int main(){
    // set: coleção de elementos únicos (que não se repetem)
    // é uma estrutura baseada em árvores binárias balanceadas (geralmente uma red black tree).

    set<int> s;

    s.insert(3);    // insert() adiciona elemento
    s.insert(3);    // não mantém dois 3 em lugares distintos
    s.insert(5);
    s.insert(7);
    s.insert(9);

    s.erase(7);     // erase() remove o elemento

    cout << "s: ";

    for(int x : s){
        cout << x << " "; // 3 5 9
    }

    // não tem acesso aleatório

    // *s acessa o elemento
    cout << "s.lower_bound(2): " << (*s.lower_bound(2)) << '\n'; // 3
    auto it = s.upper_bound(5);  // "auto" = c++ se vira pra adivinhar o tipo da variável
    if(it == s.end()){
        cout << "ninguém maior que 5 em s\n";
    }else{
        cout << "s.upper_bound(5): " << (*it) << '\n'; // 9
    }


    // multiset

    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);
    ms.insert(3);
    ms.insert(3);

    cout << "ms: ";
    for(int x : ms){
        cout << x << ' '; // 1 2 2 3 3 (mantém as duplicatas)
    }
    cout << '\n';

    /*

    */
    cout << "ms.lower_bound(0): " << (*ms.lower_bound(0)) << "\n"; // 1
    cout << "ms.upper_bound(1): " << (*ms.upper_bound(1)) << "\n"; // 2

    ms.erase(3);          //  ms = 1 2 2 - remove todas as ocorrências de 3
    ms.erase(ms.find(2)); // ms = 1 2 - ele acha uma posição que tem o 2 e remove ela

    


}