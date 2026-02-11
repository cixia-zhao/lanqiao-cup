#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int a[50];

void insertSelf(int* a,int n){
  int temp = a[4];
  for(int i = 4 - 1;i >= 2;i--){

    a[i+1] = a[i];
  }
  a[2] = temp;

}


int main(){

  int n;
  cin >> n;
  for(int i = 0;i < n;i++){

    cin >> a[i];

  }

  insertSelf(a,n);

  for(int i = 0;i < n;i++){

    cout << a[i] << " ";

  }



  return 0;
}
