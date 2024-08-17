#include<iostream>
#include<map>

using namespace std;

int main(){

    map<int, string> m;     // a estrutura do map é um pair

    m[31] = "minas";        // a posição 31 é minas
    m.insert(pair<int, string>(31, "minas"));  // insere minas no map
    cout << m[31] << '\n';

    map<string, int> m2;
    m2["minas"] = 31;
    cout << m2["minas"] << "\n";



    m.size();
    m.empty();
    m.erase('a');
    m.find('b');

}