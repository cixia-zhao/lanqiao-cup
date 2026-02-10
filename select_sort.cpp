#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int a[50];

void select_sort(int *a,int n){

  for(int i = 0;i < n - 1;i++){
    int min = i;
    for(int j = i;j < n;j++){
      if(a[min]>a[j]){

        min = j;

      }
    
    }
    int temp = a[min];
    a[min] = a[i];
    a[i] = temp;
  }

}

int main(){

  int n;
  cin >> n;
  for(int i = 0;i < n;i++){

    cin >> a[i];

  }

  select_sort(a,n);

 for(int i = 0;i < n;i++){

   cout << a[i] <<" "<< endl;

  }
   



  return 0;
}

