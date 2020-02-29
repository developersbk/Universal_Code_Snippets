A simple class with member variable, constructor, destructor
#include <iostream>
using namespace std;

class who {
  char name;
public:
  who(char c) { 
     name = c;
     cout << "Constructing who";
     cout << name << endl;
  }
  ~who() { 
     cout << "Destructing who: " << name << endl; 
  }
};

who makewho()
{
  who temp('B');
  return temp;
}

int main()
{
  who ob('A');

  makewho();

  return 0;
}
A simple conversion function example.
#include <iostream>
using namespace std;

class MyClass {
  int x, y;
public:
  MyClass(int i, int j) { 
     x = i; 
     y = j; 
  }
  operator int() { 
     return x*y; 
  }
};

int main()
{
  MyClass object1(2, 3), object2(4, 3);
  int i;

  i = object1;                 // automatically convert to integer
  cout << i << '\n';

  i = 100 + object2;           // convert object2 to integer
  cout << i << '\n';

  return 0;
}
