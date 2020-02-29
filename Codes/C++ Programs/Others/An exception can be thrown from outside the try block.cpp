An exception can be thrown from outside the try block
#include <iostream>
using namespace std;

void myFunction(int test)
{
  cout << "Inside myFunction, test is: " << test << "\n";
  if(test) throw test;
}
int main()
{
  cout << "Start\n";
  try { 
    cout << "Inside try block\n";
    myFunction(0);
    myFunction(1);
    myFunction(2);
  }
  catch (int i) { 
    cout << "Caught an exception -- value is: ";
    cout << i << "\n";
  }
  cout << "End";
  return 0;
}
