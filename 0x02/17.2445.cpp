/*
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < 1 + i; j++) cout << "*";
        for(int k = 0; k < 2*N - 2 - 2*i; k++) cout << " ";
        for(int j = 0; j < 1 + i; j++) cout << "*";
        cout << "\n";
    }
    
    for(int i = N-1; i > 0  ; i--){
        for(int j = 0; j < i; j++) cout << "*";
        for(int k = 0; k < 2*N - 2*i; k++) cout << " ";
        for(int j = 0; j < i; j++) cout << "*";
        cout << "\n";
    }
}
