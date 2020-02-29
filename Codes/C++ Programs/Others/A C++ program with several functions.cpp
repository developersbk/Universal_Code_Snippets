A C++ program with several functions
#include <iostream>
using namespace std;
void line(), message();
int main()
{
   cout << "The program starts in main()." << endl;
   line();
   message();
   line();
   cout << "At the end of main()." << endl;
   return 0;
}
void line()
{
   cout << "line();" << endl;
}
void message()
{
   cout << "In function message()." << endl;
}
