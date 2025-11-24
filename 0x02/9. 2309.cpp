/* 
왕비를 피해 일곱 난쟁이들과 함께 평화롭게 생활하고 있던 백설공주에게 위기가 찾아왔다. 일과를 마치고 돌아온 난쟁이가 일곱 명이 아닌 아홉 명이었던 것이다.
아홉 명의 난쟁이는 모두 자신이 "백설 공주와 일곱 난쟁이"의 주인공이라고 주장했다. 
뛰어난 수학적 직관력을 가지고 있던 백설공주는, 다행스럽게도 일곱 난쟁이의 키의 합이 100이 됨을 기억해 냈다.
아홉 난쟁이의 키가 주어졌을 때, 백설공주를 도와 일곱 난쟁이를 찾는 프로그램을 작성하시오.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int tall; // 각 난쟁이 입력 키
    int tall_array[9]; // 난쟁이 키 9개(전체) 담을 리스트
    int result[7]; // 7명의 난쟁이 리스트
    int total = 0; // 100인지 총합 확인할 변수

    // 난쟁이 9명 입력받기
    for(int i = 0; i < 9; i++)
        cin >> tall_array[i];
    
    // 7명 추출
    for(int i = 0; i < 9; i++){
        for(int j = i+1; j < 9; j++){
            for(int a = 0, c = 0; a < 9; a++){
                // 7명 추출
                if(a != i && a != j) result[c++] = tall_array[a];
            }
            // 추출한 7명 전부 더하기
            for(int b = 0; b < 7; b++) total += result[b];
            
            // 100이면 끝, break가 아니라 return으로 완전히 종료 시키자! 리턴은 0이여야함
            if(total == 100) {
                sort(result, result + 7); // 오름차순 정렬
                for(int i = 0; i < 7; i++) cout << result[i] << "\n";
                return 0;
                }
            else total = 0; // 총합 100이 아니면 0으로 초기화
        }
    }
}