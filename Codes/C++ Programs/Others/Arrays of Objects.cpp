Arrays of Objects
#include <iostream>
using namespace std;
class MyClass {
  int i;
public:
  void setInt(int j) { 
     i=j; 
  }
  int getInt() { 
     return i; 
  }
};
int main()
{
  MyClass myObject[3];
  int i;
  for(i=0; i<3; i++) 
     myObject[i].setInt(i+1);
  for(i=0; i<3; i++)
     cout << myObject[i].getInt() << "\n";
  return 0;
}
