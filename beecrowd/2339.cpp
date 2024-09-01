#include<iostream>

using namespace std;

int main(){
    int c, p, f;  // número de competidores, a quantidade de folhas de papel especial compradas pela Diretora e a quantidade de folhas de papel especial que cada competidor deve receber.
    cin >> c >> p >> f; 

    if(c <= p / f){
        cout << "S" << "\n";
    }else{
        cout << "N" << "\n";
    }

    return 0;
}