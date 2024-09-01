#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int num, horas;
    double valor;
    cin >> num;
    cin >> horas;
    cin >> valor;


    double salario = valor * horas;

    cout << "NUMBER = " << num << "\n";
    cout << "SALARY = U$ " << fixed << setprecision(2) << salario << "\n";

    return 0;
}