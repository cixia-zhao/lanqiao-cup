#include <iostream>
#include <string>
using namespace std;
int main(){

  string a;

  getline(cin,a);

  a.replace(2,2,"abcd",2,2);
  a.erase(0,2);


  cout << a << endl;


  return 0;
}
