/*
7개의 자연수가 주어질 때, 이들 중 홀수인 자연수들을 모두 골라 그 합을 구하고, 고른 홀수들 중 최솟값을 찾는 프로그램을 작성하시오.
예를 들어, 7개의 자연수 12, 77, 38, 41, 53, 92, 85가 주어지면 이들 중 홀수는 77, 41, 53, 85이므로 그 합은
77 + 41 + 53 + 85 = 256
이 되고,
41 < 53 < 77 < 85
이므로 홀수들 중 최솟값은 41이 된다.

홀수 odd
짝수 even
변수 초기화 잘하기!! odd_sum = 0 누락 실수 주의!
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
    int odd_sum = 0;
    int min = 100;
    int cnt = 0;

    for(int i = 0; i < 7; i++){
        cin >> N;
        if(N % 2 == 1){
            odd_sum += N;
            cnt += 1;
            if(N < min){
                min = N;
            }
        }
    }

    if(cnt == 0)
        cout << "-1";
    else{
        cout << odd_sum << "\n";
        cout << min;
    }
}