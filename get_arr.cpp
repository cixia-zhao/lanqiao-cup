#include <iostream>
using namespace std;

int* getArr(){

int* arr = new int[5];

 for(int i = 0;i < 5;i++){

  arr[i] = i;
 }

 return arr; 

}

int main(){

int *Arr = getArr();

 for(int i = 0;i < 5;i++){

   cout << Arr[i] << endl;

 }



  return 0;
}
