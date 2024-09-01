#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    int diferenca = (a * b) - (c * d);

    cout << "DIFERENCA = " << diferenca << "\n";

    return 0;
}