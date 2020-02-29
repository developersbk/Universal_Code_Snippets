This is a program of matrix capable of doing several works with two matrices.
It can add, subtract, multiply of two matrices and
if user wants to see the input entered in two matrices he can also see. It
provides the facility to user to do again some work on another matrix
without running the program twice.

Code :
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<process.h>
#define sk 100
class matrix
{
public:
int i,j,k,sum,r1,r2,c1,c2;
int m1[sk][sk],m2[sk][sk];
char reply;
void getin(void);
void mply(void);
void add(void);
void minus(void);
void read(void);
void input(void);
};
void matrix::getin()
{
cout<<"

	 WELCOME TO SOLUTION OF TWO MATRICRES ";
cout<<"
	 -------------------------------------";

cout<<"

	 YOU CAN CALCULATE UPTO A LIMIT OF MATRIX 100 * 100 ";
cout<<"

	 YOU CAN DO THE FOLLOWING : 

	 ADDITION 
	 
SUBTRACTION
";
cout<<"
	 MULTIPLICATION AND 
	 READ ONLY ";
cout<<"


	 DO YOU WANT TO CONTINUE [Y/N] : ";
cin >>reply;
if(reply=='y'||reply=='Y')
{
cout<<"

	 Enter the number of rows and columns of matrix 1 : ";
cin>>r1>>c1;
cout<<"
 Enter the value of matrix 1 : "<<endl;
for(i=0;i<r1;i++)
   for(j=0;j<c1;j++)
   cin>>m1[i][j];
cout<<"
	 Enter the number of rows and columns of matrix 2 : ";
cin>>r2>>c2;
cout<<"
 Enter the value of matrix 2 : "<<endl;
for(i=0;i<r2;i++)
   for(j=0;j<c2;j++)
   cin>>m2[i][j];
}
else exit(0);
}
void matrix::mply()
{
cout<<"
 THE RESULT AFTER MULTIPLICATION IS : 
";
if(c1==r2)
{
for(i=0;i<r1;i++)
   {
   cout<<endl;
   for(j=0;j<c2;j++)
   {
   sum=0;
   for(k=0;k<c1;k++)
   sum+=m1[i][k]*m2[k][j];
   cout<<setw(6)<<sum;
   }
   }
}
else
	{
	cout<<"
	 INVALID INPUT ";
	cout<<"
	 MULTIPLICATION NOT POSSIBLE ";
	}
}
void matrix::add()
{
cout<<"
 THE RESULT AFTER ADDITION IS : 
";
if(r1==r2&&c1==c2)
{
for(i=0;i<r1;i++)
   {
   cout<<endl;
   for(j=0;j<c1;j++)
   cout<<setw(3)<<(m1[i][j]+m2[i][j]);
   }
}
else
	{
	cout<<"
	 INVALID INPUT ";
	cout<<"
	 ADDITION NOT POSIIBLE ";
	}
}
void matrix::minus()
{
cout<<"
 THE RESULT AFTER SUBTRACTION IS : 
";
if(r1==r2&&c1==c2)
{
for(i=0;i<r1;i++)
   {
   cout<<endl;
   for(j=0;j<c1;j++)
   cout<<setw(3)<<(m1[i][j]-m2[i][j]);
   }
}
else
	{
	cout<<"
	 INVALID INPUT ";
	cout<<"
	 SUBTRACTION NOT POSSIBLE ";
	}

}
void matrix::read()
{
cout<<"
 ENTERED MATRIX 1 IS : 
";
for(i=0;i<r1;i++)
   {
   cout<<endl;
   for(j=0;j<c1;j++)
   cout<<setw(3)<<m1[i][j];
   }
cout<<endl;
cout<<"
 ENTERED MATRIX 2 IS : 
";
for(i=0;i<r2;i++)
   {
   cout<<endl;
   for(j=0;j<c2;j++)
   cout<<setw(3)<<m2[i][j];
   }
}
void main()
{
int ans,option;
char response;
matrix m;
clrscr();
start :
m.getin();
again :
cout<<"
	 What you wish to do : "<<endl;
cout<<"
	 1.ADDITION ";
cout<<"
	 2.SUBTRACTION ";
cout<<"
	 3.MULTIPLY ";
cout<<"
	 4.READ ONLY ";
cout<<"
	 5.EXIT ";
cout<<"


	 ENTER YOUR CHOICE IN NUMBERS : ";
repeat :
cin>>ans;
switch(ans)
{
case 1 : m.add(); break;
case 2 : m.minus(); break;
case 3 : m.mply(); break;
case 4 : m.read(); break;
case 5 : goto exit ;
default :
{
cout<<"
	 INVALID ENTRY 
	 ENTER YOUR CHOICE AGAIN : ";
goto repeat;
}
}
cout<<"
	 DO YOU WANT TO DO IT FOR ANOTHER TIME [Y/N] : ";
cin>>response;
if(response=='y'||response=='Y')
{
wrong:
cout<<"
	 Enter your choice in number 
";
cout<<"
	 1.FOR Same matrix 
	 2.FOR Another matrix 

	 ";
cin>>option;
switch(option)
{
case 1 : goto again;
case 2 : goto start;
default: cout<<"

	 INVALID ENTRY "; goto wrong;
}
}
exit :
getch();
}


