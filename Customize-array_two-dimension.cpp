#include <iostream>
using namespace std;

int main(){
  int m,n;
  cin >> m >> n;

  int** brr = new int* [m];

  for(int i = 0;i < m;i++){
    
    brr[i] = new int [n];

  }

  for(int i = 0;i < m;i++){

    for(int j = 0;j < n;j++ ){

      cin >> brr[i][j];

    }

  }

      cout << "------------" << endl;


  for(int i = 0;i < m;i++){

    for(int j = 0;j < n;j++ ){

      cout << brr[i][j]<< endl;

    }


      cout << brr[1][1]<< endl;

  }



  return 0;
}
