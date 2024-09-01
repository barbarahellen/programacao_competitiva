#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int distancia;
    float combustivel;

    cin >> distancia;
    cin >> combustivel;

    float consumo = distancia / combustivel;

    cout << fixed << setprecision(3) << consumo << " km/l" << "\n";

    return 0;
}