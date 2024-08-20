# Two-pointers

Two-pointers é uma técnica que é tipicamente usada para procurar pares em um array ordenado.<br>
Exemplo: dado um array ordenado A (em ordem crescente), tendo N inteiros, encontre se existe algum par de elementos (A[i], A[j]) tal que sua soma seja igual a X.<br><br>

**Ilustração**
```
A[] = {10, 20, 35, 50, 75, 80} 
X == 70 

i = 0   // ponteiro da esquerda
j = 5   // ponteiro da direita

A[i] + A[j] = 10 + 80 = 90 
Como A[i] + A[j] > X, j-- 

i = 0 
j = 4 
A[i] + A[j] = 10 + 75 = 85 
Como A[i] + A[j] > X, j-- 

i = 0 
j = 3 
A[i] + A[j] = 10 + 50 = 60 
Como A[i] + A[j] < X, i++ 

i = 1 
j = 3 
m 
A[i] + A[j] = 20 + 50 = 70 
Portanto, isso significa que o par foi encontrado.
```

O algoritmo basicamente usa o fato de que o array de entrada é ordenado. Começamos a soma dos valores extremos (menor e maior) e movemos condicionalmente ambos os ponteiros. Movemos o ponteiro esquerdo 'i' quando a soma de A[i] e A[j] é menor que X. Não perdemos nenhum par porque a soma já é menor que X. A mesma lógica se aplica ao ponteiro direito j.

