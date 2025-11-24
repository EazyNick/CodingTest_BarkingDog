/*
두 자연수 A와 B가 주어진다. 이때, A+B, A-B, A*B, A/B(몫), A%B(나머지)를 출력하는 프로그램을 작성하시오. 

입력은 개행문자나. ' ' 이런거 안붙여도 됨.
출력에만 "\n", " " 이런거 넣어주면 된다.
*/
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); // nullptr임!!

    int a, b;

    cin >> a >> b;

    cout << a + b << "\n"; // 더하기
    cout << a - b << "\n"; // 빼기
    cout << a * b << "\n"; // 곱하기
    cout << a / b << "\n"; // 나누기(몫)=
    cout << a % b << "\n"; // 나누기(나머지)

}
