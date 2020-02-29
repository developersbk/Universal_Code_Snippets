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
