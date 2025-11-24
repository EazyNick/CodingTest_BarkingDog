/*
*********
 *******
  *****
   ***
    *
   ***
  *****
 *******
*********
*/

#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < i; j++) cout << " ";
        for(int k = 0; k < 2*N - 1 - 2*i;k++) cout << "*";
        cout << "\n";
    }

    for(int i = 0; i < N-1; i++){
        for(int j = 0; j < N - 2 - i; j++) cout << " ";
        for(int k = 0; k < 3 + 2* i;k++) cout << "*";
        cout << "\n";
    }

}
