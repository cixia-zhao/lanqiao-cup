#include <iostream>
#include <string>
using namespace std;

 class Person{
    
  private:
    string smallname;
    int age;
    char gender;

  public:
    string name;

    void eat(){

    cout << "1" <<endl;

    }


  };



int main(){

//first method.  
Person* p = new Person();
p->name = "haha";
cout << p->name << endl;
p->eat();

//seconf method.
Person p1;
p1.name = "second";
cout << p1.name << endl;
  return 0;
} 
