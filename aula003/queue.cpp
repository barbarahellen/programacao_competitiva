#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<int> fila;

    fila.push(2);
    fila.push(3);
    fila.push(5);
    fila.push(7);

    fila.pop();
    fila.pop();

    cout << "frente da fila = " << fila.front() << "\n";
}