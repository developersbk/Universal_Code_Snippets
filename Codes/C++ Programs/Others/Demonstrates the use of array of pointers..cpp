Demonstrates the use of array of pointers.

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	// initialize an array of char pointers with five fortunes
	const char* const Fortune[5] = 
	         {" Earth is a great funhouse without the fun.",
		  " There is always more hell that needs raising.",
		  " Confession is good for the soul, but bad for the career.",
		  " Live in a world of your own, but always welcome visitors.",
		  " The man who laughs has not yet been told the terrible news."
		  };
	cout << "Here are the 5 fortunes: " << endl;
	for(int i = 0; i < 5; i++)
	{
		cout << Fortune[i] << endl;
	}

	
}
