/*
첫째 줄에는 별 2×N-1개, 둘째 줄에는 별 2×N-3개, ..., N번째 줄에는 별 1개를 찍는 문제
별은 가운데를 기준으로 대칭이어야 한다. (삼각형 뒤집힌 모양)
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
        for(int j = 0; j < i;j++){
            cout << " ";
        }
        for(int k = 0; k < 2*N - 1 - 2*i; k++){
            cout << "*";
        }


        cout << "\n";
    }


}