#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int a, b, c;

    cin >> a >> b >> c;

    int maiorAB = (a + b + abs(a-b)) / 2; // calcula o maior entre a e b
    int maiorBC = (b + c + abs(b-c)) / 2; // calcula o maior entre b e c

    if(maiorAB > maiorBC)
        cout << maiorAB << " eh o maior" << "\n";
    else
        cout << maiorBC << " eh o maior" << "\n";

    return 0;
}