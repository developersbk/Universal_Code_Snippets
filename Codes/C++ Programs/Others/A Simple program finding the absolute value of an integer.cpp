A Simple program finding the absolute value of an integer
A Simple program without using functions
    
This program find the absolute value of an integer without using a function

#include <iostream>
using namespace std;

int main()
{
	int number;
	int abs_number;

	// Ask for input
	cout << "This program finds the absolute value of an integer." << endl;
	cout << "Enter an integer (positive or negative): ";
	cin >> number;
	
	// Find the absolute value
	if(number >= 0)
	{
		abs_number = number;
	}
	else
		abs_number = -number;
	
	// Print out output
	cout << "The absolute value of " << number << " is " << abs_number;
	cout << endl;
	return 0;
}

The same program using function

This program finds the absolute value of an integer using a function

int Abs(int i); // Function prototype
int main()
{
	int number;
	int abs_number;

	cout << "This program finds the absolute value of an integer." << endl;
	cout << "Enter an integer (positive or negative): ";
	cin >> number;
	
	// Calling the function Abs()
	abs_number = Abs(number);
	cout << "The absolute value of " << number << " is " << abs_number;
	cout << endl;
	return 0;
}
// Function definition
int Abs(int i)
{
	if( i >= 0)
		return i;
	else
		return -i;
}
