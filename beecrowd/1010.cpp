#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int c1, n1, c2, n2;
    double v1, v2;

    cin >> c1 >> n1 >> v1;
    cin >> c2 >> n2 >> v2;

    double total = (n1 * v1) + (n2 * v2);

    cout << "VALOR A PAGAR = R$ " << fixed << setprecision(2) << total << "\n";

    return 0;
}