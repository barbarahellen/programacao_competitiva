#include <iostream>
using namespace std;

int main(){
    
    int a;
    int numPares = 0;

    for(int i = 0; i <= 4; i++){
        cin >> a;
        if(a % 2 == 0){
            numPares++;
        }
    }

    cout << numPares << " valores pares" << endl;

    return 0;
}