/*
총 N개의 정수가 주어졌을 때, 정수 v가 몇 개인지 구하는 프로그램을 작성하시오.

다른 풀이 방식이 더 좋아보임!
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, V; //N은 정수의 총 개수 1이상, 100이하
    // V는 찾으려고 하는 정수 100이상, -100 이하
    int arr[201] = {};

    cin >> N;
    int cnt = 0;
    for(int i = 0; i < N; i ++){
        int t;
        cin >> t;
        arr[i] = t;
    }

    cin >> V;

    for(int i = 0; i < N; i ++){
        if(arr[i] == V){
            cnt += 1;
        }
    }
    cout << cnt;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  // -100 <= v && v <= 100 이므로 음수도 저장할 수 있는 공간을 배열에 추가
  int N, v, a[201] = {};
  cin >> N;

  // 입력값을 배열에 저장
  while(N--){
    int t;
    cin >> t;
    // 음수도 인덱스로 접근하기 위해 기존 인덱스+100으로 배열에 저장
    a[t+100]++;
  }

  // v의 개수를 배열에서 확인
  cin >> v;
  cout << a[v+100];
}