Time arithmatic

#include<stdio.h>
#include<conio.h>

typedef struct
{
	int hh,mm,ss;
}time;

time add(time f,time s);
time sub(time f,time s);
time input(void);

void main()
{
	time f,s,ans;
	int ch;
	clrscr();
	do
	{
		printf("\n <1> enter first operand ");
		printf("\n <2> enter second operand ");
		printf("\n <3> time addition ");
		printf("\n <4> time subtraction ");
		printf("\n <5> Exit \n\n");
		do
		{
			printf("enter your choice ");
			scanf("%d",&ch);
		}while(ch<1 || ch>5);
		switch (ch)
		{
			case 1:
				printf("\n enter the time(hh mm ss) ");
				f=input();
				break;
			case 2:
				printf("\n enter the time(hh mm ss) ");
				s=input();
				break;
			case 3:
				ans=add(f,s);
				printf("\n time addition is %d %d %d",ans.hh,ans.mm,ans.ss);
				break;
			case 4:
				ans=sub(f,s);
				printf("\n time subtraction is %d %d %d",ans.hh,ans.mm,ans.ss);
				break;
		}
	}while(ch!=5);
}

time input(void)
{
	time temp;
	do
	{
		printf("\n enter the hours : ");
		scanf("%d",&temp.hh);
	}
	while(temp.hh<0 || temp.hh>12);
	do
	{
		printf("\n enter the minutes : ");
		scanf("%d",&temp.mm);
	}
	while(temp.mm<0 || temp.mm>=60);
	do
	{
		printf("\n enter the seconds : ");
		scanf("%d",&temp.ss);
	}
	while(temp.ss<0 || temp.ss>=60);
	return temp;
}
time add(time x,time y)
{
	time a;
	if(x.ss+y.ss>60)
		++x.mm,a.ss=(x.ss+y.ss)%60;
	else
		a.ss=x.ss+y.ss;
	if(x.mm+y.mm>60)
		++x.hh,a.mm=(x.mm+y.mm)%60;
	else
		a.mm=x.mm+y.mm;
	if(x.hh+y.hh>12)
		a.hh=(x.hh+y.hh)%12;
	else
		a.hh=x.hh+y.hh;
	if(a.hh==0)
		a.hh=12;
	return a;
}

time sub(time x,time y)
{
	time a;
	if(x.ss-y.ss<0)
		--x.mm,a.ss=60+x.ss-y.ss;
	else
		a.ss=x.ss-y.ss;
	if(x.mm-y.mm<0)
		--x.hh,a.mm=60+x.mm-y.mm;
	else
		a.mm=x.mm-y.mm;
	if(x.hh-y.hh<0)
		a.hh=12+x.hh-y.hh;
	else
		a.hh=x.hh-y.hh;
	if(a.hh==0)
		a.hh=12;
	return a;
}
