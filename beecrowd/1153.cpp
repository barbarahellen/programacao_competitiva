#include<iostream>

using namespace std;

int main(){
    int n;
    int fatorial = 1;

    cin >> n;

    for(int i = 0; i <= (n-1); i++){
        fatorial *= (n - i);
    }
    cout << fatorial << "\n";


    return 0;
}