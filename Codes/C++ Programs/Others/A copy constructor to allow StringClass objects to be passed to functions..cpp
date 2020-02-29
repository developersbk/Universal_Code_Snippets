A copy constructor to allow StringClass objects to be passed to functions.
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class StringClass {
  char *p;
public:
  StringClass(char *s);           // constructor
  StringClass(const StringClass &o);  // copy constructor
  ~StringClass() {                // destructor
     delete [] p; 
  } 
  char *get() { 
     return p; 
  }
};


StringClass::StringClass(char *s)     // "Normal" constructor
{
  int l;

  l = strlen(s)+1;

  p = new char [l];
  if(!p) {
    cout << "Allocation error\n";
    exit(1);
  }

  strcpy(p, s);
}


StringClass::StringClass(const StringClass &o)   // Copy constructor
{
  int l;

  l = strlen(o.p)+1;

  p = new char [l];                  // allocate memory for new copy
  if(!p) {
    cout << "Allocation error\n";
    exit(1);
  }

  strcpy(p, o.p);                    // copy string into copy
}

void show(StringClass x)
{
  char *s;
   
  s = x.get();
  cout << s << endl;
}

int main()
{
  StringClass a("Hello World"), b("Hello World");

  show(a);
  show(b);

  return 0;
}
