Additional meanings for the + and = operations
#include <iostream>  
#include <string.h>  
using namespace std;
class str_type {  
  char string[80];  
public:  
  str_type(char *str = "\0") { strcpy(string, str); }  
     
  str_type operator+(str_type str);  
  str_type operator+(char *str);  
     
  str_type operator=(str_type str);  
  str_type operator=(char *str);  
     
  void show_str(void) { cout << string; }  
} ;  
     
str_type str_type::operator+(str_type str) {  
  str_type temp;  
     
  strcpy(temp.string, string);  
  strcat(temp.string, str.string);  
  return temp;  
}  
     
str_type str_type::operator=(str_type str) {  
  strcpy(string, str.string);  
  return *this;  
}  
     
str_type str_type::operator=(char *str)  
{  
  str_type temp;  
     
  strcpy(string, str);  
  strcpy(temp.string, string);  
  return temp;  
}  
     
str_type str_type::operator+(char *str)  
{  
  str_type temp;  
     
  strcpy(temp.string, string);  
  strcat(temp.string, str);  
  return temp;  
}  
     
main(void)  
{  
  str_type a("Hello "), b("There"), c;  
     
  c = a + b;  
     
  c.show_str();  
  cout << "\n";  
     
  a = "to program in because";  
  a.show_str();  
  cout << "\n";  
     
  b = c = "C++ is fun";  
     
  c = c+" "+a+" "+b;  
  c.show_str();  
     
  return 0;  
}
