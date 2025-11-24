/*
카드 역순 뒤집기
*/

#include <bits/stdc++.h>

using namespace std;

int num[20]; // 1~20까지의 숫자를 담는 배열

// 변수 a번째 수부터 b번째 수의 순서를 바꿈
void reverse(int a, int b){
    for(int i = 0; i <= (b - a)/2;i++)
        swap(num[a+i], num[b-i]);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    // 0~19 인덱스에 1~20 삽입
    for(int i = 0; i < 20; i++) num[i] = i + 1;

    int a, b;
    
    // 입력 10개, 5번쨰면 4번쨰 인덱스니 -1 해줌
    for(int i = 0; i < 10;i++){
        cin >> a >> b;
        reverse(a-1, b-1);
    }

    // 20개 배열 출력
    for(int i = 0; i < 20; i++)
        cout << num[i] << ' ';
    

}