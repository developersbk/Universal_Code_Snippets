Misc. Programs In C++

//This is a program for copy desired file.
//You can use this program as garbage with ur program.

#include <iostream.h>
#include <fstream.h>
#include <process.h>
#include <conio.h>
void main()
{
   ifstream infile;
   ofstream outfile;
   ofstream printer;
   char filename[20];
   cout<<"
Enter the desired file to copy.";
   cin>>filename;
   infile.open(filename,ios::nocreate);
   if(!infile)
   {
      cout<<"Input file can not be opened."<<endl;
      exit(1);
   }
   outfile.open("copy");
   if(!outfile)
   {
      cout<<"Output file can not be opened.";
      exit(1);
   }
   printer.open("PRN");
   if(!printer)
      {
         cout<<"There is a problem with printer.";
         getch();
         exit(1);
      }
   cout<<"All files have been opened.";
   char ch;
   outfile<<"This is the begining of the file.";
   while(infile.get(ch))
   {
      outfile.put(ch);
   }
   infile.close();
   outfile.close();
   getch();
}

// This is How a Header file is creatred and used.

#include <iostream.h>
#include <string.h>
class college
{
   private:
          char collegename[80];
   public:
      college()
      {
         strcpy(collegename,"XXX");
      }
      char * getcollegename()
      {
         return collegename;
      }
};
class student:public college
{
   private:
      char studname[40];
      char address[80];
   public:
      student(char *name)
      {
         strcpy(studname,name);
      }
      char * studentname()
      {
         return studname;
      }
      setaddress(char *add)
      {
         strcpy(address,add);
      }
      char * studentaddress()
      {
         return address;
      }
};


#include <d:cppcollege.h>
#include <conio.h>
void main()
{
   clrscr();
   studentfile student;
   student.studentname("XXX");
   getch();
};


#include <iostream.h>
#include <conio.h>
#include <stdarg.h>
//Declare a function with one required parameter
void display(int number,...);
void main()
{
   int index=5;
   int one=1,two=2;
   clrscr();
   display(one,index);
   getch();
}
void display(int number,...)
{
   va_list para;
   va_start(para,number);
   cout<<"The parameters are:"<<endl;
   cout<<va_arg(para,int)<<" ";//extract a parameter
}


#include<stdio.h>
#include<conio.h>
void main()
  {
    clrscr();
    printf("%d
%d",sizeof(NULL),sizeof(""));
    getch();
  }

#include<stdio.h>
#include<conio.h>
void main()
 {
  int a=10,b=20;
  clrscr();
  swapv(&a,&b);
  printf("
 A=%d",a);
  printf("
 B=%d",b);
  getch();
 }

 swapv(int *x,int *y)
  {
   int t;
   t=*x;
   *x=*y;
   *y=t;
   return;
  }


/* This is the program using pointer to swap values */

#include<stdio.h>
#include<conio.h>
void main()
 {
  int a=10,b=20;
  clrscr();
  nilesh(a,b);
  printf("
 A=%d",a);
  printf("
 B=%d",b);
  getch();
 }

  nilesh(x,y)
  {
   int t;
   t=x;
   x=y;
   y=t;
   printf("
 X=%d",x);
   printf("
 Y=%d",y);
   return;
  }
