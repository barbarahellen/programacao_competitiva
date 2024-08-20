/*
Static Range Sum Queries

Given an array of n integers, your task is to process q queries of the form: what is the sum of values in range [a,b]?
Input
The first input line has two integers n and q: the number of values and queries.
The second line has n integers x1,x2, ...,xn: the array values.
Finally, there are q lines describing the queries. Each line has two integers a and b: what is the sum of values in range [a,b]?
Output
Print the result of each query.

Example
Input:
8 4
3 2 4 5 1 1 5 3
2 4
5 6
1 8
3 3

Output:
11
2
24
4

*/

#include<iostream>
#include<vector>

using namespace std;
using ll = long long;

int n, q;

int main(){
    cin >> n >> q;

    vector<ll> v(n + 1), pref(n + 1);

    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }

    pref[0] = 0;

    for(int i = 1; i <= n; i++){
        pref[i] = pref[i - 1] + v[i];
    }

    while(q--){
        int a, b;
        cin >> a >> b;
        cout << pref[b] - pref[a - 1] << "\n";
    }

    return 0;
}