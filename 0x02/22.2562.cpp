/*
9개의 서로 다른 자연수가 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램을 작성하시오.
예를 들어, 서로 다른 9개의 자연수
3, 29, 38, 12, 57, 74, 40, 85, 61
이 주어지면, 이들 중 최댓값은 85이고, 이 값은 8번째 수이다.
*/

// sort해서 비교하거나, 바로 들어오자마자 비교하기 방식 

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; // 입력 자연수
    int max = 0; // 최댓값
    int idx; // 몇번째 값인지 나타내는 인덱스

    for(int i = 0; i < 9;i++){
        cin >> N;

        if(max < N){
            max = N;
            idx = i + 1;
        }
    }
    cout << max << "\n";
    cout << idx;
}


#include <bits/stdc++.h>
using namespace std;

int a[9];
int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  for(int i = 0; i < 9; i++) cin >> a[i];
  cout << *max_element(a, a+9) << '\n';
  cout << max_element(a, a+9) - a + 1;
}

/*
max_element 함수를 이용한 풀이
*/