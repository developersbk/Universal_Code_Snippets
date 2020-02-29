Addition operator in cout
#include <iostream>
using namespace std;
int main(void)
{
   int total, added, dropped;
   cout << "Enter total: ";
   cin >> total;
   cout << "Enter added: ";
   cin >> added;
   total = total + added;
   cout << "Enter dropped ";
   cin >> dropped;
   total -= dropped;
   cout << "Number: " << total << endl;
   return 0;
}
