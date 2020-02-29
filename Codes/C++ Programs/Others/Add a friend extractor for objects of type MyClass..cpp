Add a friend extractor for objects of type MyClass.
#include <iostream>
using namespace std;

class MyClass {
  int x, y;
public:
  MyClass() { 
     x = 0; 
     y = 0; 
  }
  MyClass(int i, int j) { 
     x = i; 
     y = j; 
  }
  friend ostream &operator<<(ostream &stream, MyClass ob);
  friend istream &operator>>(istream &stream, MyClass &ob);
};

ostream &operator<<(ostream &stream, MyClass ob)
{
  stream << ob.x << ", " << ob.y << '\n';
  return stream;
}

istream &operator>>(istream &stream, MyClass &ob)
{
  cout << "Enter MyClassinates: ";
  stream >> ob.x >> ob.y;
  return stream;
}

int main()
{
  MyClass a(1, 1), b(10, 23);

  cout << a << b;

  cin >> a;
  cout << a;

  return 0;
}
