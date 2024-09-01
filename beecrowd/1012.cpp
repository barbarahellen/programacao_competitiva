#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){

    double a, b, c;

    cin >> a >> b >> c;

    double triangulo = (a * c) / 2;
    double circulo = 3.14159 * pow(c, 2);
    double trapezio = ((a + b) * c) / 2;
    double quadrado = b * b;
    double retangulo = a * b;


    cout << "TRIANGULO: " << fixed << setprecision(3) << triangulo << "\n";
    cout << "CIRCULO: " << fixed << setprecision(3) << circulo << "\n";
    cout << "TRAPEZIO: " << fixed << setprecision(3) << trapezio << "\n";
    cout << "QUADRADO: " << fixed << setprecision(3) << quadrado << "\n";
    cout << "RETANGULO: " << fixed << setprecision(3) << retangulo << "\n";


    return 0;
}