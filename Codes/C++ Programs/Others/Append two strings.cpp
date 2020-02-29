Append two strings
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main()
{
   string string1( "cat" );
   string string3;

   string3.assign( string1 );
   
   cout << "string1: " << string1 
        << "\nstring3: " << string3 << "\n\n";

   
   string3 += "pet";
   string3.append( string1, 1, string1.length() - 1 );

   cout << "string1: "   << string1 
        << "\nstring3: " << string3 << "\n\n";

   return 0;
}
