To find if the given number is an armstrong number or not

# include <iostream.h>
# include <conio.h>
# include <math.h>
 void main ()
{ clrscr();
 int a,b=0,sum=0;
 long int n;
 cout<<"ENter the NO. : ";
 cin>>n;
 for(;n>0;)
//counts the digits
 { a=n%10;
   n=n/10;
   b++;
 }
 for(;n>0;)
 { a=n%10;
   sum=sum+pow(a,b);
   n=n/10;
 }
  if(sum==n)
 { cout<<"IT IS AN ARMSTRONG NUMBER...";
  getch();
 }
  else
 { cout<<"IT IS NOT AN ARMSTRONG NUMBER...";
   getch();
 }
}
