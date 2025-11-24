/*
정수 세 개를 생각한 뒤에, 이를 오름차순으로 정렬하고 싶어졌다.
정수 세 개가 주어졌을 때, 가장 작은 수, 그 다음 수, 가장 큰 수를 출력하는 프로그램을 작성하시오.
중앙값 구하는 방법 참고, 출력에 ' ' 붙여야함!!

sort 방법도 참고
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    int maxvalue, minvalue, center;

    maxvalue = max({a, b, c});
    minvalue = min({a, b, c});
    center = a + b + c - maxvalue - minvalue;

    cout << minvalue << ' ' << center << ' ' << maxvalue;
}

/*
sort를 이용한 방법
*/

#include <bits/stdc++.h>

using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int arr[4];
  for(int i=0;i<3;i++){
    cin>>arr[i];
  }
  sort(arr, arr+3);
  for(int i=0;i<3;i++){
    cout<<arr[i]<<" ";
  }
}