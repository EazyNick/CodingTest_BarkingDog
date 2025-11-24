/*
첫째 줄에는 별 1개, 둘째 줄에는 별 3개, ..., N번째 줄에는 별 2×N-1개를 찍는 문제
별은 가운데를 기준으로 대칭이어야 한다. (세모 모양)

오른쪽 공백은 그냥 출력 안하고 개행해버리면 됨!
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N - 1 - i; j++){
            cout << " ";
        }
        for(int k = 0; k < 2*i + 1; k++){
            cout << "*";
        }


        cout << "\n";
    }
}