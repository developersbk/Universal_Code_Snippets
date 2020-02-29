A switch statement in action
#include <iostream>
using namespace std;
int main(void)
{
   char grade;
   cout << "Enter your grade: ";
   cin >> grade;
   switch (grade)
   {
   case 'A':
      cout << "Your average must be between 90 - 100" 
           << endl;
      break; 
   case 'B':
      cout << "Your average must be between 80 - 89" 
           << endl;
      break;
   case 'C':
      cout << "Your average must be between 70 - 79" 
           << endl;
      break;
   case 'D':
      cout << "Your average must be between 60 - 69" 
           << endl;
      break;
   default: 
      cout << "Your average must be below 60" << endl;
   }
   return 0;
}
