/*
세 개의 자연수 A, B, C가 주어질 때 A × B × C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램을 작성하시오.
예를 들어 A = 150, B = 266, C = 427 이라면 A × B × C = 150 × 266 × 427 = 17037300 이 되고, 계산한 결과 17037300 에는 0이 3번, 1이 1번, 3이 2번, 7이 2번 쓰였다.

해결 방식 참고
*/

#include <bits/stdc++.h>
using namespace std;

int num[10];

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
    
  int A, B, C, total;
  cin >> A >> B >> C;

  total = A * B * C;
    
  while(total > 0) {
    num[total % 10]++; // 10으로 나누면, 가장 아랫자리 수를 알 수 있음
    total /= 10; // 위에서 기록했으니, 마지막자리 수 삭제
  }
    
  for(int i = 0; i < 10; i++) cout << num[i] << "\n";
}