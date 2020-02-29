Assign values using the member initialization syntax
#include <iostream>

using namespace std;

class MyClass {
  const int numA; // const member
  const int numB; // const member
public:
  // Initialize numA and numB using initialization syntax.
  MyClass(int x, int y) : numA(x), numB(y) { }
  int getNumA() { 
     return numA; 
  }
  int getNumB() { 
     return numB; 
  }
};
int main()
{
  MyClass object1(7, 9), object2(5, 2);
  cout << "Values in object1 are " << object1.getNumB() << " and " << object1.getNumA() << endl;
  cout << "Values in object2 are " << object2.getNumB() << " and " << object2.getNumA() << endl;
  return 0;
}
