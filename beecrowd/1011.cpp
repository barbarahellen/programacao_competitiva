#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){

    int raio;
    double pi = 3.14159;

    cin >> raio;

    double volume = (4/3.0) * pi * pow(raio, 3);

    cout << "VOLUME = " << fixed << setprecision(3) << volume << "\n";

    return 0;
}