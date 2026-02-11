#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int a[50];

void arrDelate(int* a,int n){

  for(int i = 1;i < n;i++){

    a[i] = a[i+3];
  
  }
  

}

int main(){

  int n;
  cin >> n;
  for(int i = 0;i < n;i++){

    cin >> a[i];

  }

  arrDelate(a,n);

  for(int i = 0;i < n - 3;i++){

    cout << a[i] << " ";

  }


  return 0;
} 
