/*
Inverse inversions

Your task is to create a permutation of numbers 1,2,\dots,n that has exactly k inversions.
An inversion is a pair (a,b) where a < b and pa > pb where pi denotes the number at position i in the permutation.
Input
The only input line has two integers n and k.
Output
Print a line that contains the permutation. You can print any valid solution.

Example
Input:
5 4

Output:
1 5 2 4 3
 
*/

#include<iostream>

using namespace std;

long long n, k, ans, soma, atual, l, r;
 
int main(){
    cin >> n >> k;
	l = 1, r = n;

	while (l <= r){
		atual = r-l;
		if (soma + atual <= k) {
			soma += atual;
			cout << r << ' ';
			r--;
		}
		else{
			cout << l << ' ';
			l++;
		}
	}
	cout << endl;


}