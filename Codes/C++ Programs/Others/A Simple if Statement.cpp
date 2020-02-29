A Simple if Statement
This program illustrates a simple if statement.
It reads in two integers and prints out a
message on the screen according to their values.

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

  return 0;
}
