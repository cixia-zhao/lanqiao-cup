#include <iostream>
using namespace std;

int main(){
  
  int arr[100] = {0};
  arr[1] = 1,arr[2] = 1;
  for(int i = 3;i <= 30;i++){

    arr[i] = arr[i-1] + arr[i-2];

  }

  cout << arr[30] << endl;

  return 0;
}
