#include<iostream>
#include<queue>

using namespace std;

int main(){

    priority_queue<int> fila_prior;

    fila_prior.push(10);
    fila_prior.push(5);
    fila_prior.push(20);
    cout << fila_prior.top() << endl;


    fila_prior.size();

    fila_prior.pop();
    
    fila_prior.clear();

}