#include <iostream>
using namespace std;

int main(){

  char str[1024];
  fgets(str,1024,stdin);

  cout << str+1 << endl;


  return 0;
}
