/*
정보 초등학교에서는 단체로 2박 3일 수학여행을 가기로 했다. 여러 학년이 같은 장소로 수학여행을 가려고 하는데 1학년부터 6학년까지 학생들이 묵을 방을 배정해야 한다. 
남학생은 남학생끼리, 여학생은 여학생끼리 방을 배정해야 한다. 또한 한 방에는 같은 학년의 학생들을 배정해야 한다. 물론 한 방에 한 명만 배정하는 것도 가능하다.
한 방에 배정할 수 있는 최대 인원 수 K가 주어졌을 때, 조건에 맞게 모든 학생을 배정하기 위해 필요한 방의 최소 개수를 구하는 프로그램을 작성하시오.
예를 들어, 수학여행을 가는 학생이 다음과 같고 K = 2일 때 12개의 방이 필요하다. 왜냐하면 3학년 남학생을 배정하기 위해 방 두 개가 필요하고 4학년 여학생에는 방을 배정하지 않아도 되기 때문이다.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; // 수학 여행에 참가하는 학생수를 나타내는 정수 1 <= N <= 1000 -> N이 15라면, (S, Y) 쌍이 15개
    int K; // 한 방에 배정할 수 있는 최대 인원 수 1 < k <= 1000
    int S; // 성별 여학생0, 남학생1
    int Y; // 학년 Y, 1 <= Y <= 6

    int arr[2][6] = {};
    int room = 0; // 필요한 방 개수

    cin >> N >> K;
    for(int i = 0; i < N; i++){
        cin >> S >> Y; // S성별 학생이 Y학년이다. (1명)
    
        if(S == 0) arr[0][Y-1] += 1; // 여
        else if(S == 1) arr[1][Y-1] += 1; // 남
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 6; j++){
            while(arr[i][j] > K){
                room += 1;
                arr[i][j] -= K;
            }
            if(arr[i][j] > 0)
                room += 1;
        }
    }
    cout << room;
}

#include <bits/stdc++.h>
using namespace std;

int N, K, ans=0;
int s[2][7]={};  // 성별/반별 학생 수를 저장하는 배열

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N >> K;
  // 학생 수 저장
  for (int i=0; i<N; ++i) {
    int a, b;
    cin >> a >> b;
    s[a][b]++;
  }

  // 필요한 방의 개수 계산
  for (int i=0; i<2; ++i) {
    for (int j=1; j<7; ++j) {
      // 배정에 필요한 만큼 방의 개수 추가
      ans += s[i][j] / K;
      // 학생이 남을 경우, 하나의 방이 더 필요하므로 방의 개수 추가
      if (s[i][j] % K) ++ans;
    }
  }
  cout << ans;
}