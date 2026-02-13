#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int a[50];

void insertSort(int* a,int n){

  for(int i = 1;i < n;i++){

    int t = a[i];
    int j = i - 1;
    for(;j >= 0;j--){

      if(a[j] > t){

        a[j+1] = a[j];

      }
      else {
        break;
      }
         }
        a[j+1] = t;


  }
  


}

int main(){

  int n;
  cin >> n;
  for(int i = 0;i < n;i++){

    cin >> a[i];

  }
  insertSort(a,n);

  for(int i = 0;i < n;i++){

    cout << a[i] << " " ;

  }



  return 0;
}
