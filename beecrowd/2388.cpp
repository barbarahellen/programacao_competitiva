#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, v, t, total = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> t >> v;
        total += (v * t);
    }
    
    cout << total << "\n";


    return 0;
}