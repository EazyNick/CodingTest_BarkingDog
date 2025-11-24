/*
시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.

(90 <= Number <= 100) 로 하면 안되고, 아래처럼 해야함!
(90 <= Number && Number <= 100)

*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Number;
    cin >> Number;

    if(90 <= Number && Number <= 100)
        cout << "A";
    else if(80 <= Number)
        cout << "B";
    else if(70 <= Number)
        cout << "C";
    else if(60 <= Number)
        cout << "D";
    else
        cout << "F";
}