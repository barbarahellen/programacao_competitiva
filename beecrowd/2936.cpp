#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int porcoes[5] = {300, 1500, 600, 1000, 150};

int main(){
    int n;
    int total = 225;  // contando já com a porção de chica

    for(int i = 0; i < 5; i++){
        cin >> n;
        total += n * porcoes[i];
    }

    cout << total << "\n";

    return 0;
}