Assigning and Displaying Array Values
#include <iostream>

using namespace std;

int main ()
{
   int testScore[3];

   cout << "Enter test score #1: ";

   cin >> testScore[0];

   cout << "Enter test score #2: ";

   cin >> testScore[1];

   cout << "Enter test score #3: ";

   cin >> testScore[2];

   cout << "Test score #1: " << testScore[0] << endl;

   cout << "Test score #2: " << testScore[1] << endl;

   cout << "Test score #3: " << testScore[2] << endl;
   return 0;
}
