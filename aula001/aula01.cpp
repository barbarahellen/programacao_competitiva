#include <iostream>

using namespace std;

int main() {
    // inteiro
    short numeroShort;
    long numeroLong;
    int numeroInt;

    // ponto flutuante
    float numeroFlutuante;
    double numeroDouble;

    // caractere
    char caractere;

    // sequência de caracteres
    string string;


    // operadores lógicos:
    int a = 5;
    int b = 3;
    int c = 8;

    cout << "a > b: " << (a > b) << endl; // true(1)
    cout << "a < b: " << (a < b) << endl; // false(0)
    cout << "a == b: " << (a == b) << endl; // false(0)
    cout << "(a > b) && (a + b > c): " << ((a > b) && (a + b > c)) << endl;   // true (1)
    cout << "a != b: " << (a != b) << endl;   // true (1)


    // operadores condicionais
    int numero;
    cout << "digite um número inteiro: ";  // cout é o print 
    cin >> numero;      // cin recebe o número

    if(numero > 0){
        cout << "o número é positivo." << endl;    // endl é uma quebra de linha
    }else{
        cout << "o número é negativo ou zero. " << endl;
    }

    // switch
    int dia;

    cout << "digite o numero do dia da semana (1-7): " << endl;
    cin >> dia;

    switch (dia){
    case 1:
        cout << "domingo" << endl;
        break;
    case 2:
        cout << "segunda" << endl;
        break;

    default:
        cout << "inválido" << endl;
        
    }    


    // estruturas de repetição
    int d = 0;

    while(d < 5){
        cout << "contador: " << d << endl;
        d++;
    }

    do{
        cout << "contador: " << d << endl;
        d++;
    }while(d < 5);

    for(int i = 0; i < 5; i++){
        cout << "contador: " << i << endl;
    }


    return 0;


}
