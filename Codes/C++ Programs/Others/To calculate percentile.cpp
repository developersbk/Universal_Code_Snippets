To calculate percentile

Write a program for the problem: the array of
inetegers indicating the marks of the students is
given, U have to calculate the percentile of the
students aaccording to this rule: the percentile of a
student is the %of no of student having marks less
then him. For eg:
suppose

Student Marks
A 12
B 60
C 80
D 71
E 30
F 45


percentile of C = 5/5 *100 = 100 (out of 5 students 5
are having marks less then him)

percentile of B = 3/5*100 = 60% (out of 5, 3 have
markses less then him)

percentile of A = 0/5*100 = 0%.

#include<iostream.h>
#include<conio.h>

  void main()
  {
    clrscr();
    int a[10],n,i,j;
    int percent;
    int count;
    cout<<"
 enter the size of array";
    cin>>n;
   cout<<"
 enter the values";
    for(i=0;i<=n-1;i++)
    {
       cout<<" a["<<i<<"]"<<"=";
       cin>>a[i];
    }

    for( i=0;i<=n-1;i++)
     { count=0;
     for(j=0;j<=n-1;j++)
     {  if(a[i]>a[j])
	{
	count=count+1;
	}
	}
	percent=(count*100)/(n-1);
     cout<<"

 the percentile of"<<"a["<<i<<"]"<<percent;
     }
     getch();

     }
