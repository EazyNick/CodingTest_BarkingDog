/*
문제 참고, 마름모모양 별찍기 ◆
N이 5면, 2n-1줄 출력
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
        for(int j = 0; j < N - 1 - i; j++) cout << " ";
        for(int k = 0; k < 1 + 2*i; k++) cout << "*";
        
        cout << "\n";
    }

    for(int i = 1; i < N; i++){
        for(int j = 0; j < i; j++) cout << " ";
        for(int k = 0; k < 2*N - 1 - 2*i; k++) cout << "*";
        
        cout << "\n";
    }
}

