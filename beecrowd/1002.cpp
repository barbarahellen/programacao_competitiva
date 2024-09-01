#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){

    double n;
    double pi = 3.14159;
    cin >> n;

    double area = pi * (pow(n,2));

    cout << "A=" << fixed << setprecision(4) << area << "\n";

    return 0;
}