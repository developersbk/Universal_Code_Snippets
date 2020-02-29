Number Game in C++.

#include<iostream.h>
#include<conio.h>
void main()
{
int s,a,t,o,x=2,c,r,i;
char ch;
s=t=0,r=22,c=2;
clrscr();
cout<<"                          This is a computer Game.

########################

There are 22 balls on  a table,you can take
either a
 ";
cout<<"maximum of 4 balls or a minimum of 1 at a time.If you take
";
cout<<" the last ball from the table you will WIN other wise Computer
..
";
cout<<"
Either You or Coputer can Take First ,Enter yr choice
I(you)/C(computer)
";
cin>>ch;
if (ch=='I'|| ch=='i')
{
i=1,o=1;
s:
for (;i<17;i++)
{
cout<<"

You:";
cin>>a;
   switch(a)
  {
    case 1:
    r=r-a;
    s=s+a;
    cout<<"Remaining ="<<r;
    break;

    case 2:
    s=s+a;
    r=r-a;
    cout<<"Remainig ="<<r;
    if(i==1)
     { cout<<"

VIJOY:"<<o;
      r=r-o;
      s=s+o;
      cout<<"
Remaining ="<<r;
      i=2; goto s;
     }
    break;

    case 3:
    s=s+a;
    r=r-a;
    cout<<"Remainig ="<<r;
    break;

    case 4:
    s=s+a;
    r=r-a;
    cout<<"Remaining ="<<r;
    if(i==2)
    { cout<<"

VIJOY:"<<o;
     r=r-o;
     s=s+o;
     cout<<"
Remaining ="<<r;
     i=3;goto s;}

     if(i==3)
     { cout<<"

VIJOY:"<<2;
       r=r-2;
       s=s+2;
       cout<<"
Remaining ="<<r;
       i=4;goto s;}
    break;
  default:
  cout<<"Wrong Withdrawl......
";
  cout<<"Exitting...";goto e;
   }

 j:
if(s<c)
 {
t=c-s;
  s=s+t;
  r=r-t;
  if(t==5)
   {cout<<"

Since I Have To WIN I Am Taking 5 Balls...";
    cout<<"
VIJOY:"<<t;
    cout<<"
Remainig ="<<r;
    cout<<"

Anyway Congrats To You
";
     goto e;}
  cout<<"

VIJOY:"<<t;
  cout<<"
Remainig ="<<r;

  if(r==0)
   {cout<<"

You Lost The Game........!!!! 
Think again....
";
    goto e;}

  c=c+5;
  i=5;
 }
  else
 { c=c+5;goto j;}
}
}
else
{
cout<<"
Coputer:"<<x;
r=r-x;
cout<<"
Remainig ="<<r;
s=s+x;
i=5;
goto s;
}
e:
getch();
clrscr();


for(i=1;i<20;i++)
cout<<"a";
getch();
}
