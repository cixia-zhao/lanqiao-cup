#include <iostream>
using namespace std;
int main(){

bool flag = 1;
int n = 0;
cin >> n;

 if (n == 1) {
  
   cout << 0 << endl;
 }
 else {
   
 

    for(int i = 2;i < n;i++ ){

      if (n % i == 0) {

        flag = 0;
    

      }

    }
 }

        cout << flag << endl;
  return 0;
}
