#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int a[50];
int b[50];
int main(){

  int n;
  cin >> n;

  memset(b,0,sizeof(b));
  for(int i = 0;i < n;i++){

    cin >> a[i];
    b[a[i]]++;

  }
  int m = a[0];
  for(int i = 0;i < n;i++){
    if(m<a[i]){
      m = a[i];
    }
  }
  for(int i = 0;i <= m;i++){

    if(b[i] == 0) {
      continue;
    }
    for(int j = 0;j < b[i];j++){
      cout << i << " ";
    }

  }

  return 0;
}
