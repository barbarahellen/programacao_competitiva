#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int c;  // numero de metros que leonardo pretende percorrer
    int n;  // comprimento da pista

    cin >> c >> n;

    for(int i = 0; i < c; i++){
        n += n;
    }

    cout << n << "\n";

    return 0;
}