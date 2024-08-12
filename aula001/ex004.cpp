/*
Faça um programa que leia 5 valores inteiros. Conte quantos destes valores digitados são pares e mostre esta informação.

Entrada
O arquivo de entrada contém 5 valores inteiros quaisquer.

Saída
Imprima a mensagem conforme o exemplo fornecido, indicando a quantidade de valores pares lidos.

Exemplo de Entrada	Exemplo de Saída
7
-5
6
-4
12                  3 valores pares

*/

#include <iostream>
using namespace std;

int main(){
    
    int a;
    int numPares = 0;

    for(int i = 0; i <= 4; i++){
        cin >> a;
        if(a % 2 == 0){
            numPares++;
        }
    }

    cout << numPares << " valores pares" << endl;

    return 0;
}