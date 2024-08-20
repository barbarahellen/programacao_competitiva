/*

Given an array of n positive integers, your task is to count the number of subarrays having sum x.

Input
The first input line has two integers n and x: the size of the array and the target sum x.
The next line has n integers a_1,a_2,\dots,a_n: the contents of the array.

Output
Print one integer: the required number of subarrays.

Example
Input:
5 7
2 4 1 2 7

Output:
3 

*/
 
#include<iostream>
#define MAXN 100

using namespace std;

int arr[MAXN], n, m, resp;

int main(){
    // representar os subarrays como ponteiros

    /*
        enquanto a soma do subarray atual for menor que o número que que quero, 
        aumenta-se o tamanho do array (ponteiro da direita).
    */
    /*
        2 4 1 2 7            2 4 1 2 7
        ^   ^                  ^   ^
        L   R                  L   R
    */

    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int soma = 0;    // soma atual do intervalo
    int left = 1;    // ponteiro da esquerda

    for(int right = 1; right <= n; right++){  // ponteiro da direita sempre incrementado por 1
        soma += arr[right];  // adiciona o valor da direira no intervalo  
        while(soma > m){  // caso a soma seja maior que o necessário, diminui o intervalo
            soma -= arr[left];
            left++;   // atualiza o ponteiro da esquerda
        }
        resp += (soma == m);
    }
    cout << resp << endl;
    return 0;
}