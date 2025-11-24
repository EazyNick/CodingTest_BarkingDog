/*
알파벳 소문자로만 이루어진 단어 S가 주어진다. 각 알파벳이 단어에 몇 개가 포함되어 있는지 구하는 프로그램을 작성하시오.

string s
for(auto c: s) // s의 한 문자씩 c에 대입하여 for문 돔
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[26] = {}; // 전역변수면 초기화 필요 없지만, 지역변수라면 초기화 꼭 필요!!

    string s;
    cin >> s;    
    for(auto c: s){
        arr[c - 'a'] += 1;
    }

    for(int i = 0; i < 26; i++){
        cout << arr[i] << ' ';
    }

}