add method to struct
#include <iostream>
#include <string.h>
using namespace std;
struct Msg 
{
  char message[256];
  void show_message(void); 
};


struct UpperMsg 
{
   char message[256];
   void show_message(void); 
};


void Msg::show_message(void)
{
   cout << message;
}

void UpperMsg::show_message(void)
{
   cout << strupr(message);
}

int main(void)
{
   Msg book = { "C\n" };
   UpperMsg book_upr = { "P\n" };

   book.show_message();
   book_upr.show_message();
}
