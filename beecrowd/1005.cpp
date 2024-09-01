#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    double a, b;
    cin >> a;
    cin >> b;

    double media = ((a * 3.5) + (b * 7.5)) / 11;

    cout << "MEDIA = " << fixed << setprecision(5) << media << "\n";


    return 0;
}