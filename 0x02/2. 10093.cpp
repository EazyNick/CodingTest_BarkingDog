/*
두 양의 정수가 주어졌을 때, 두 수 사이에 있는 정수를 모두 출력하는 프로그램을 작성하시오.
입력 - 두 정수 A와 B가 주어진다. (a가큰지 b가큰지 모름)
출력
첫째 줄에 두 수 사이에 있는 수의 개수를 출력한다.
둘째 줄에는 두 수 사이에 있는 수를 오름차순으로 출력한다.
*/

#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // long long a, b
    int a, b;

    // a, b 값을 받음
    cin >> a >> b;

    // a가 b보다 크면 바로 a, b를 바꿈
    // 우리는 a부터 b 사이의 값을 구할 것임
    if (a > b) swap(a,b);
    
    // 만약 a가 b랑 같거나, 차이가 1이라면 출력할 것은 없으니 0으로 출력
    if (a == b || b - a == 1) cout << 0;
    // 이외의 경우 a와 b 사이의 값을 출력
    else{
        cout << b - a - 1 << "\n"; // a와 b사이의 숫자 개수, a < x < b에서 x의 개수
        for(int i = a + 1; i < b; i++) // a, b 사이의 값 출력
            cout << i << " ";
    }
}