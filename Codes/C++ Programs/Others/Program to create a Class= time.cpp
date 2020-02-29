Program to create a Class= time

#include<iostream.h>
# include<conio.h>
class time
{
	int hr,min,sec;
	public: //don't forget it !
	time()
	{
		hr=min=sec=0;
		cout<<"
Time reset to 00:00:00";
	}
	time(int h,int m,int s)
	{
		hr =h;
		min=m;
		sec=s;
		cout<<"
Time set to specified value.";
	}
	void display()
	{
		cout<<"
Time set is # "<<hr<<":"<<min<<":"<<sec;
	}
	void add(time t1,time t2)
	{
		sec = t1.sec + t2.sec;
		if (sec > 59)
		{sec -=60; min++;}
		min += t1.min +t2.min; //Note Operator Precedence
		if(min>59)
		{min-=60; hr++;}
		hr += t1.hr + t2.hr;
		// Excluding the possibility of hr being greater than
		// 24. We do not want digression...!
	}
};
void main()
{
clrscr();
time a(12,11,33);
time b(10,34,50);
time c;
a.display();
b.display();
c.add(a,b);
c.display();
getch();
}
