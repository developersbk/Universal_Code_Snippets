Add an else part to the if statement
#include <iostream>
using namespace std;
int main(void)
{
   int num;
   cout << "Enter a whole number: ";
   cin >> num;
   if ( num % 2 == 0 )
      cout << "The number is even" << endl;
   else
      cout << "The number is odd" << endl;
   return 0;
}
