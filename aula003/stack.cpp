#include<iostream>
#include<stack>

using namespace std;

int main(){

    stack<int> pilha;   // stack<tipo> nome_da_pilha

    pilha.push(10);     // adiciona elemento na pilha
    pilha.push(5);
    pilha.push(3);

    pilha.pop();        // retira o valor do topo


    cout << "topo da pilha: " << pilha.top() << '\n';
    cout << "quantidade de elementos na pilha: " << pilha.size() << '\n';  

    pilha.push(4);
    cout<< "qtd de elementos = " << pilha.size() << "\n";

    while(!pilha.empty()){  
        pilha.pop();
    }

    cout << "qtd de elementos = " << pilha.size() << "\n";

}