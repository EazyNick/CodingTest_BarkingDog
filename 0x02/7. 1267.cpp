#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; // 통화의 개수 N
    int n; // 통화 시간 n
    int arr[N-1]; // 통화 시간이 담긴 배열 (N개)
    int Y = 0; // 영식 요금제 요금
    int M = 0; // 민식 요금제 요금

    // 첫번쨰로 통화의 개수 N개 입력
    cin >> N;

    // N개의 통화 시간 입력을 배열에 저장
    for(int i = 0; i < N;i++){
        cin >> n;
        arr[i] = n;
        }

    // 영식 요금제 요금 총합
    for(int i = 0; i < N;i++)    
        Y += (arr[i] / 30 + 1) * 10;

    // 민식 요금제 요금 총합
    for(int i = 0; i < N;i++)    
        M += (arr[i] / 60 + 1) * 15;

    // 요금제 비교 후 싼 것 출력, 두 요금제가 같으면 아무거나 출력해도 됨.
    if(Y > M)
        cout << "M" << " " << M;
    else if(Y < M)
        cout << "Y" << " " << Y;
    else
        cout << "Y M" << " " << Y;
    
}