An example that uses typeid for base and derived classes
#include <iostream>
#include <typeinfo>
using namespace std;

class BaseClass {
  virtual void f() {}; // make BaseClass polymorphic
  
};

class Derived1: public BaseClass {
  
};

class Derived2: public BaseClass {
  
};

int main()
{
  int i;
  BaseClass *p, baseob;
  Derived1 object1;
  Derived2 object2;

  cout << "Typeid of i is ";
  cout << typeid(i).name() << endl;
  
  p = &baseob;
  cout << "p is pointing to an object of type ";
  cout << typeid(*p).name() << endl;

  p = &object1;
  cout << "p is pointing to an object of type ";
  cout << typeid(*p).name() << endl;

  p = &object2;
  cout << "p is pointing to an object of type ";
  cout << typeid(*p).name() << endl;

  return 0;
}
