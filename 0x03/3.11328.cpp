/*
C 언어 프로그래밍에서 문자열(string)은 native한 자료형이 아니다. 사실, 문자열은 그저, 문자열의 끝을 표시하기 위한 말단의 NULL이 사용된, 문자들로 이루어진 문자열일 뿐이다. 
하지만 프로그래밍 언어에서 문자열을 다루는 것은 매우 중요하기 때문에, C 표준 라이브러리는 문자열을 다루는 데에 매우 유용한 함수들을 제공하고 있다 
: 그들 중에는 strcpy, strcmp, strtol, strtok, strlen, strcat 가 있다.

하지만, 잘 알려져 있지 않으며, 잘 사용되지도 않는 함수가 하나 있다 : strfry 함수다. 
strfry 함수는 입력된 문자열을 무작위로 재배열하여 새로운 문자열을 만들어낸다. (역자 주 : 여기에서 입력된 문자열과 새로 재배열된 문자열이 다를 필요는 없다.)

두 개의 문자열에 대해, 2번째 문자열이 1번째 문자열에 strfry 함수를 적용하여 얻어질 수 있는지 판단하라.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; // 테스트 케이스의 수 0 < N < 1001
    cin >> N;

    for(int i = 0; i < N; i++){
        int arr[26] = {};
        int arr2[26] = {};

        string s1, s2;
        cin >> s1 >> s2; // ring, gnir
        
        for(auto c:s1) arr[c-'a'] += 1;
        for(auto c:s2) arr2[c-'a'] += 1;

        bool possible = true;

        for(int j = 0; j < 26; j++){
            if(arr[j] != arr2[j])
                possible = false;
        }
            
        if(possible) cout << "Possible\n";
        else cout << "Impossible\n";
    }
}

// 배열을 하나만 사용함!
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N;
  cin >> N;
  while (N--) {
    int a[26] = {}; // 각 문자의 개수를 저장하는 배열
    string s1, s2;
    cin >> s1 >> s2;

    for (auto c : s1) a[c-'a']++; // 첫 번째 문자열의 각 문자는 개수+1
    for (auto c : s2) a[c-'a']--; // 두 번째 문자열의 각 문자는 개수-1

    // 0이 아닌 배열의 요소가 있을 경우, 개수가 다른 문자가 존재하므로 false
    bool isPossible = true;
    // 중괄호가 없어도 문제는 없으나 가독성을 위해 삽입
    for (int i : a){
      if (i != 0) isPossible = false;
    }

    if(isPossible) cout << "Possible\n";
    else cout << "Impossible\n";
  }
}