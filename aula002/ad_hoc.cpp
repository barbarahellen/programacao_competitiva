// Problemas ad-hoc

// problemas com uma solução específica/pouco generalizável.

/*
    Problema: Special characters
    Dado um valor n, construa uma string com n posições especiais.
    Uma posição é especial se for igual a exatamente um de seus vizinhos.

    por exemplo, a string _A_ A _A_ B _AACC_ tem 6 posições especiais (sublinhadas).

*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std; 

int main(){
    int n;
    cin >> n;

    if(n % 2){
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    for(int i = 0; 2* i < n; ++i){
        char c = 'A'+ (i%26);
        cout << c << c;
    }
    cout << '\n';

}
