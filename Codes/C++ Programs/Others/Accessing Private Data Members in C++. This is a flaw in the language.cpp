Accessing Private Data Members in C++. This is a flaw in the language

#include <iostream.h>
#include <string.h>
#include <conio.h>

class bestcoder
{
  private:

     char name[40];
     char grade;
     int age;

  public:

 bestcoder(char* nam="Some Dude",char gr='A',int saal=25)
      {
         strcpy(name,nam);
         grade=gr;
         age=saal;
      }

 friend ostream& operator <<(ostream& s,bestcoder b);
};

ostream& operator <<(ostream& s,bestcoder b)
{
  s<<"Best Coder  :"<<b.name<<endl
  		 <<"His Rating  :"<<b.grade<<endl
   <<"Current Age :"<<b.age<<"

";
   return s;
}

struct hackit
{
  char name[40];
  char grade;
  char age;
};

void main()
{
 bestcoder bc;
 cout<<bc;
 void* ptr=&bc;
 struct hackit* bettercoder=(hackit*)ptr;
 bettercoder->grade='F';
 bettercoder->age=56;
 cout<<bc;
 strcpy(bettercoder->name,"xxx");
 bettercoder->age=14;
 bettercoder->grade='A';
 cout<<bc;
 getch();
}
