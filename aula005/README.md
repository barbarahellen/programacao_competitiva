# Soma de prefixo
É uma técnica de programação usada normalmente em problemas de programação que tratam de intervalos. Utilizamos um array "pref" que, para cada índice i, guarda a soma de todos os valores do array original desde a primeira posição até a posição i.<br>

Formalmente, temos que: <br>

pref[i] = $\sum_{k=1}^{i}$ v[k]

exemplo: 
vetor = 1 4 5 10 3 13 <br>
i-ésimo prefixo de um vetor: são todos os valores desde a 1ª posição até a i-ésima posição.<br>

Soma de prefixos: é a soma de todos os valores que fazem parte de um prefixo do vetor.<br>
ex: soma do 5º prefixo = 1 + 4 + 5 + 10 + 3 = 23<br>
````
pref[i] = pref[i - 1] + v[i]  // o prefixo de i é igual ao prefixo anterior mais o valor da posição atual
````

### Soma de prefixo 2D:
Complexidade: O(n²)
````
// Computando a soma de prefixos:
for(int i = 1; i <= n; i++)
    for(int j = 1; j <= n; j++)
        pref[i][j] = pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1] + m[i][j];
````
````
// respondendo a cada consulta:
while(q--){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << pref[c][d] - pref[c][b -1] - pref[a - 1][d] + pref[a - 1][b - 1];
    cout << "\n";
}
````