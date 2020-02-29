An example that uses typeid on a polymorphic class hierarchy
#include <iostream>
#include <typeinfo>
using namespace std;
class Mammal {
public:
  virtual bool laysEggs() { 
    return false; 
  }
};
class Cat: public Mammal {
public:
};
class Platypus: public Mammal {
public:
  bool laysEggs() { 
    return true; 
  }
};
int main()
{
  Mammal *p, AnyMammal;
  Cat cat;
  Platypus platypus;
  p = &AnyMammal;
  cout << "p is pointing to an object of type ";
  cout << typeid(*p).name() << endl;
  p = &cat;
  cout << "p is pointing to an object of type ";
  cout << typeid(*p).name() << endl;
  p = &platypus;
  cout << "p is pointing to an object of type ";
  cout << typeid(*p).name() << endl;
  return 0;
}
