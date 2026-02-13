#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int a[50];

void shellSort(int* a,int n){

  for(int gap = n/2;gap > 0;gap /= 2){

    for(int i = gap;i < n;i++){

      int t = a[i];
      int j = i - gap;
      for(;j >= 0;j -= gap){

        if(a[j] > t){
          a[j+gap] = a[j];
        }
        else break; 


      }
      a[j+gap] = t;
    }

  }


}

int main(){
  int n;
  cin >> n;
  for(int i = 0;i < n;i++){

    cin >> a[i];

  }

  shellSort(a,n);

  for(int i = 0;i < n;i++){

    cout << a[i] << " ";

  }

  return 0;
}
