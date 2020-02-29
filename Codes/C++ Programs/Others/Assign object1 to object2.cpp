Assign object1 to object2
#include <iostream>
using namespace std;

class BaseClass {
  int a;
public:
  void load_a(int n) { 
    a = n; 
  }
  int get_a() { 
    return a; 
  }
};

class DerivedClass : public BaseClass {
  int b;
public:
  void load_b(int n) { 
     b = n; 
  }
  int get_b() { 
     return b; 
  }
};

int main()
{
  DerivedClass object1, object2;

  object1.load_a(5);
  object1.load_b(10);

  
  object2 = object1;

  cout << "Here is object1's a and b: ";
  cout << object1.get_a() << ' ' << object1.get_b() << endl;

  cout << "Here is object2's a and b: ";
  cout << object2.get_a() << ' ' << object2.get_b() << endl;

  return 0;
}
