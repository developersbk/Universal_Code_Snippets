This program in CPP, demonstrates the array implementation of Circular Queue.

Code:

#include<iostream.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

// Defining class CQUEUE
class cqueue
 {
   int q[10],num,front,rear;
   public :
	cqueue();
	void insert();
	void remove();
	void menu();
	void display();
 };

cqueue :: cqueue()
 {
   front=rear=0;
 }

void cqueue :: insert()
 {
   if(((rear+1)%10)==front)
    {
      cout<<"Queue is full
";
    }
   else
    {
      cout<<"Please enter a number : 
";
      cin>>
      q[rear];
      rear=(rear+1)%10;
    }
 }

void cqueue :: remove()
 {
   if(rear==front)
    {
      cout<<"Queue is empty
";
    }
   else
    {
      int num=q[front];
      cout<<"You deleted "<<num<<"
";
      front=(front+1)%10;
      getch();
    }

 }

void cqueue::display()
 {
   int i=front;
   if(front==rear)
    {
      cout<<"Queue is empty, No elements to display !!!!!! 
 ";
    }
   else
    {
      cout<<"Queue's elements are :
";
      cout<<"Front = ";
      while( i!=rear)
       {
	if(i==(rear-1)) cout<<"Rear = ";
	cout<<q[i]<<"
";
	i=i++%10;

       } // end while.
    }// end elseif.
   getch();
 }

void cqueue :: menu()
 {
   int ch=1;
   clrscr();
   while (ch)
    {
      clrscr();
      cout<<"Enter your Choice
1 : insert
2 : remove
3 : display
0 
:
exit
";

      cin >>ch;
      switch (ch)
       {
	 case 1 : insert();
		  break;
	 case 2 : remove();
		  break;
	 case 3 : display();
		  break;
	 case 0 : exit(0);
       }
    }
 }


void main()
 {
  cout<<"Program to demonstrate Circular Queue
";
  cqueue q1;
  q1.menu();
 }


