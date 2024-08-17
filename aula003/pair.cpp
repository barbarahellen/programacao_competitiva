#include<iostream>
#include<utility>

using namespace std; 

int main(){
    pair<int, int> par1;
    pair<int, char> par2;
    pair<string, int> par3;
    pair<pair<int, float>, int> par4; // é possível fazer um pair de pair (mas não se usa)

    // acessando o pair
    par1.first = 10;
    par1.second = 50;

    // acessando o pair de pair:
    par4.first.first = 4;    

    cout << par1.first << " ";
    cout << par1.second << "\n";

}
