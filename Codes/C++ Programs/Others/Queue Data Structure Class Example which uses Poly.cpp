Queue Data Structure Class Example which uses Polymorphism

#include <dos.h>
#include <stdlib.h>
#include <iostream.h>
#include <conio.h>
#include <windows.h>

#define MAX 5           // MAXIMUM CONTENTS IN QUEUE

class task
{
   public:
    virtual void dotask(){}
    task(){}
    int exists;

};

class notep: public task
{

  public:
    notep(){exists=1;}

      void dotask()
      {
          system("notepad");
      }
};

class regt:public task
{
     public:
     regt(){exists=1;}

     void dotask()
     {
       system("regedit");
     }
};

class winex:public task
{
     public:
     winex(){exists=1;}

     void dotask()
     {
       system("explorer");
     }
};

class Bep:public task
{
  public:
  Bep(){exists=1;}

  void dotask()
  {
     cout<<"a";
  }
};

class MsBox:public task
{
  private:
  char* text;
  char* caption;
  int style;

  public:
  MsBox(char* ext,char* cap,int no)
  {
   text=ext;
   caption=cap;
     exists=1;
     style=no;
  }

  void dotask()
  {
     MessageBox(0,text,caption,style);
  }
};

class queue
{
 private:
 task *t[MAX];
 int al;
 int dl;

 public:
 int opt,opt1,a;
 char te[255],capt[40];

  queue()
 {
  dl=-1;
  al=-1;
 }

void del()
{
  task* tmp;
  if(dl==-1)
  {
     cout<<"Queue is Empty";
   sleep(2);
  }
  else
  {
     t[dl]->exists=0;
     for(int j=0;j<=al;j++)
     {
       if((j+1)<=al)
       {
       tmp=t[j+1];
       t[j]=tmp;
       }
       else
       {
       t[al]->exists=0;
       al--;

       if(al==-1)
          dl=-1;
          else
          dl=0;
       }
     }
  }
}

void menu()
{
 clrscr();
 cout<<"1) Add Task 
2)Execute Tasks
3)Exit Program
";
// int opt;
 cin>>opt;
 switch(opt)
 {
  case 1:
  clrscr();
  cout<<"1) Open Notepad
";
  cout<<"2) Open Explorer
"
         <<"3) Open Registry
"
         <<"4) Sound a Beep
"
         <<"5) MessageBox API
"
         <<"6) Back
";


  cin>>opt1;
  if(opt1!=6)
  add(opt1);
  break;

  case 2:
  if(al!=-1 && dl!=-1)
  {
     for(int k=0;k<=al;k++)
      {
         if(t[k]->exists==1)
         t[k]->dotask();
         t[k]->exists=0;
      }
      al=dl=-1;
  }
  else
  {
  cout<<"Queue is Empty";
  sleep(3);
  }
  break;

  case 3:
  exit(0);
  break;
 }
}

void add(int item)
{
 if(dl==-1 && al==-1)
 {
  dl++;
  al++;
 }
 else
 {
  al++;
  if(al<MAX){}
  else
  {
     cout<<"Queue is Full
";
     al--;
   sleep(3);
     return;
  }
 }
 switch(item)
 {
  case 1:
  t[al]=new notep;
  break;

  case 2:
  t[al]=new winex;
  break;

  case 3:
  t[al]=new regt;
  break;

  case 4:
  t[al]=new Bep;
  break;

  case 5:
  cout<<"
 Enter Style Number:";
  cin>>a;
  t[al]=new MsBox("Task Performed.","Queue Implementation",a);
  break;

  default:
  cout<<"Programming Error"; // No Possibility of this executing
  };
  }

};

void main()
{
 queue a;
 while(1)
 {
 a.menu();
 }
}
