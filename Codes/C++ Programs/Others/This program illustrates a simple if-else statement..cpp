This program illustrates a simple if-else statement.

#include <iostream>
using namespace std;

int main()
{
  int a, b;

  cout << "Enter first number: ";
  cin >> a;
  cout << "Enter second number: ";
  cin >> b;

  if(a < b) 
	  cout << "First number is less than second.\n";
  else
	  cout << "First number is greater than or equal to second.\n";

  return 0;

}
