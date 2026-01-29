#include <iostream>

using namespace std;

template <class C>
class Person{

  public:
    C data;

    Person(C data){

      this->data = data; 

    }


};



int main(){

Person<int>* p = new Person<int>(210);
cout << p->data << endl;



  return 0;
}
