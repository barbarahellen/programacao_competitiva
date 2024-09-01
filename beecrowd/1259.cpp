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
