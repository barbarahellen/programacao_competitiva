#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    int tempo;
    int velocidade;

    cin >> tempo;      // 10
    cin >> velocidade; // 85

    float distanciaPercorrida = velocidade * tempo;    // 850 km

    float litrosNecessarios = distanciaPercorrida/12; 

    cout << fixed << setprecision(3) << litrosNecessarios << "\n";

}