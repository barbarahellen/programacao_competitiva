#include<iostream>
#include<map>
#include<iomanip>

using namespace std;

int main(){
    
    int n;      // qtd de idas a feira
    cin >> n;

    map<string, double> produtos;

    for(int i = 0; i < n; i++){
        string item;
        double preco;
        int n_itens;         // qtd de produtos disponiveis pra venda
  
        cin >> n_itens;

        for(int j = 0; j < n_itens; j++){
            cin >> item >> preco;
            produtos[item] = preco;
        }


        int n_compra;      // número de compras
        cin >> n_compra;
        int qtd;           // quantidade dos produtos que se deseja comprar
        double valor = 0;

        for(int j = 0; j < n_compra; j++){
            cin >> item >> qtd;
            if(produtos.find(item) != produtos.end()){
                valor += (qtd * produtos[item]);
            }
        }
        cout << "R$ " << fixed << setprecision(2) << valor << "\n";

    }  
}