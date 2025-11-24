/*
정수 N개로 이루어진 수열 A와 정수 X가 주어진다. 이때, A에서 X보다 작은 수를 모두 출력하는 프로그램을 작성하시오.

수열이지만, 배열로 안두고 그냥 입력 받자마자 비교 후 출력하면 된다.
*/


#include <iostream>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 입력
    int N, X; // N개로 이루어진 수열, 정수 X(x보다 작은 값을 출력할 것)

    cin >> N >> X;

    int a; // 배열을 만들지 않고 바로 값을 비교해서 출력할 것

    // 값 비교해서 X보다 작은 값 출력
    for(int i = 0; i < N; i++){
        cin >> a;
        if (a < X){
            cout << a << " ";
        }
    }


        


}