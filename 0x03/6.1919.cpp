/*
두 영어 단어가 철자의 순서를 뒤바꾸어 같아질 수 있을 때, 그러한 두 단어를 서로 애너그램 관계에 있다고 한다. 
예를 들면 occurs 라는 영어 단어와 succor 는 서로 애너그램 관계에 있는데, occurs의 각 문자들의 순서를 잘 바꾸면 succor이 되기 때문이다.
한 편, dared와 bread는 서로 애너그램 관계에 있지 않다. 하지만 dared에서 맨 앞의 d를 제거하고, bread에서 제일 앞의 b를 제거하면, ared와 read라는 서로 애너그램 관계에 있는 단어가 남게 된다.
두 개의 영어 단어가 주어졌을 때, 두 단어가 서로 애너그램 관계에 있도록 만들기 위해서 제거해야 하는 최소 개수의 문자 수를 구하는 프로그램을 작성하시오. 
문자를 제거할 때에는 아무 위치에 있는 문자든지 제거할 수 있다.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;

    cin >> s1 >> s2;

    int arr[26] = {};
    int ans = 0;

    for (auto c: s1) arr[c-'a'] += 1;
    for (auto c: s2) arr[c-'a'] -= 1;

    // 다른 알파뱃들을 최소한으로 버리기, 0을 제외한 모든 숫자는 true (마이너스 값 포함)
    for(int i = 0; i < 26; i++){
        while(arr[i]){
            if(arr[i] > 0) {
                arr[i] -= 1;
                ans += 1;
            }
            else if(arr[i] < 0){
                arr[i] += 1;
                ans += 1;
            }
        }
    }
    cout << ans;
}

// 절댓값 사용(abs)
#include <bits/stdc++.h>
using namespace std;

int arr[2][26], res;
string s1, s2;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
 
  cin>>s1>>s2;
  for(char c : s1)
    arr[0][c-'a']++;
  
  for(char c : s2)
    arr[1][c-'a']++;
  
  for(int i=0; i<26; i++)
    res += abs(arr[0][i]-arr[1][i]);
  
  cout << res;
}