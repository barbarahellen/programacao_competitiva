#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    if(n == 0)
        cout << "E" << "\n";
    else if(1 <= n && n <= 35)
        cout << "D" << "\n";
    else if(36 <= n && n <= 60)
        cout << "C" << "\n";
    else if(61 <= n && n<= 85)
        cout << "B" << "\n";
    else if(86 <= n && n <= 100)
        cout << "A" << "\n";


    return 0;
}