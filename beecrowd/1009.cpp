#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    string nome;
    double salario, vendas;

    cin >> nome;
    cin >> salario;
    cin >> vendas;
    
    double total = salario + (vendas * 0.15);

    cout << nome << "\n";
    cout << "TOTAL = R$ " << fixed << setprecision(2) << total << "\n";

    return 0;
}