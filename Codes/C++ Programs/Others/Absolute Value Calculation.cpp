Absolute Value Calculation
This is a simple function that calculates the absolute value of a number:

#include <iostream>
using namespace std;

double Abs(double Nbr)
{
//	return (Nbr >= 0) ? Nbr : -Nbr;
	if( Nbr >= 0 )
		return Nbr;
	else
		return -Nbr;
}

int main()
{
	double Number = -88;
	double Nbr    = Abs(Number);

	cout << "The absolute value of " << Number << " is " << Nbr << endl;

	return 0;
}

Here is an example of running the program:

The absolute value of -88 is 88

