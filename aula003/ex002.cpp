/*
    Beecrowd 1259
    Considerando a entrada de valores inteiros não negativos, ordene estes valores segundo o seguinte critério:

    Primeiro os Pares
    Depois os Ímpares
    Sendo que deverão ser apresentados os pares em ordem crescente e depois os ímpares em ordem decrescente.

    Entrada
    A primeira linha de entrada contém um único inteiro positivo N (1 < N <= 105) Este é o número de linhas de entrada que vem logo a seguir. As próximas N linhas conterão, cada uma delas, um valor inteiro não negativo.

    Saída
    Apresente todos os valores lidos na entrada segundo a ordem apresentada acima. Cada número deve ser impresso em uma linha, conforme exemplo abaixo.

    Exemplo de Entrada   |	Exemplo de Saída
        5                        4
        4                        32
        32                       34
        34                       3456
        543                      543 
        3456                     
*/

#include<iostream>
#include<vector>
#include<algorithm> 

using namespace std;

int main(){

    int n;    
    cin >> n;

    vector<int> par;
    vector<int> impar;

    int num;
    for(int i = 0; i < n; i++){
        cin >> num;
        if(num % 2 == 0){
            par.push_back(num);
        }else {
            impar.push_back(num);
        }
    }

    sort(par.begin(), par.end());
    sort(impar.begin(), impar.end(), greater<int>());

    for(int i = 0; i < par.size(); i++){
        cout << par[i] << "\n";
    }

    for(int j = 0; j < impar.size(); j++){
        cout << impar[j] << "\n";
    }

}




/*

1ª resolução - time limit exceeded :(

#include<iostream>
#include<vector>

using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> vetor(n);

    for(int i = 0; i <= n-1; i++){
        cin >> vetor[i];
    }

    // ordenando 
    for(int inicio = 0; inicio < n-1; ++inicio){
        int temp = inicio;
        for(int i = inicio + 1; i < n; ++i){
            if(vetor[i] < vetor[temp]){
                temp = i;
            }
        }
        swap(vetor[inicio], vetor[temp]);     // troca os dois valores
    }

    for(int j = 0; j < vetor.size(); j++){
        if(vetor[j] % 2 == 0){
            cout << vetor[j] << "\n";
        }
    }

    for(int k = vetor.size(); k > 0; k--){
        if(vetor[k] % 2 != 0){
            cout << vetor[k] << "\n";
        }
    }

}

*/