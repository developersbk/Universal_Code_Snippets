Program to deal with denominations of any amount

//DENOMINATIONS
#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
clrscr();
long r,x1,x2,d1,d2,d3,d4,d5,d6,d7,d8,d9,q1,q2,y1,y2,z1,z2,t1,t2,
											 p1,p2,s1,s2,k1,k2;
int li,lp;
for(li=10;li<71;li++)
{
gotoxy(li,15);
delay(30);
printf("/");
}
for(li=70;li>=10;li--)
{
gotoxy(li,22);
delay(30);
printf("\");
}
for(lp=16;lp<=21;lp++)
{
gotoxy(10,lp);
delay(100);
printf("-");
}
for(lp=21;lp>=16;lp--)
{
gotoxy(70,lp);
delay(100);
printf("-");
 }
gotoxy(16,17);
textcolor(BLINK+YELLOW);
cprintf("                 DENOMINATIONS");
gotoxy(36,28);
textcolor(LIGHTGREEN);
gotoxy(44,48);
textcolor(WHITE);
cout<<"
 please enter the number to be denominated:";
cin>>r;
x1=r/1000;
x2=r%1000;
d1=x1*1000;
y1=x2/500;
y2=x2%500;
d2=y1*500;
z1=y2/100;
z2=y2%100;
d3=z1*100;
s1=z2/50;
s2=z2%50;
d4=s1*50;
t1=s2/20;
t2=s2%20;
d5=t1*20;
p1=t2/10;
p2=t2%10;
d6=p1*10;
k1=p2/5;
k2=p2%5;
d7=k1*5;
q1=k2/2;
q2=k2%2;
d8=q1*2;
d9=q2*1;
textmode(BW40);
cout<<"
 The respective denomination is:




"
    <<"1000 *"<<x1<<"="<<d1<<"
"
    <<" 500 *"<<y1<<"="<<d2<<"
"
    <<" 100 *"<<z1<<"="<<d3<<"
"
    <<"  50 *"<<s1<<"="<<d4<<"
"
    <<"  20 *"<<t1<<"="<<d5<<"
"
    <<"  10 *"<<p1<<"="<<d6<<"
"
    <<"   5 *"<<k1<<"="<<d7<<"
"
    <<"   2 *"<<q1<<"="<<d8<<"
"
    <<"   1 *"<<q2<<"="<<d9<<"
"
    <<"               -----------
"
    <<"         Total="<<r<<"
"
    <<"               -----------
";
getch();
}
