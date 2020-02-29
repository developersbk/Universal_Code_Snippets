Using algorithm for code assignment to characters of varying probabilities

#include<stdio.h>
#include<conio.h>
#include<math.h>
int temp,i,j,col=0,n=100,count=0,b[10][2];
float a[10],sum=100;
char c[10][10];
void main()
{
void part(int,int);
clrscr();
printf("Enter number of characters ");
while(n>10)
{
printf("(Not more than 10) ");
scanf("%d",&n);
}
while(sum>1)
{
printf("Enter their probabilities of occurences
");
sum=0;
for(i=1;i<=n;i++)
{
printf(".");
scanf("%f",&a[i]);
while(a[i]>=1)
a[i]=a[i]/10;
sum=sum+a[i];
if(sum>1)
break;
}
if(sum>1)
printf("Sum of probabilities must be less than or equal to 1 !
");
}
for(i=0;i<10;i++)
{
for(j=0;j<10;j++)
c[i][j]='*';
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[j]<a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}}}
printf("

");
part(1,n);
printf("The codes are 
");
for(i=0;i<n;i++)
{
for(j=0;j<10;j++)
printf("%c ",c[i][j]);
printf("
");
}
getch();
}
void part(int low,int high)
{
int min=100,k,z,sum=0,dif,sum1=0,l=0;
z=(high-low);
z=abs(z);
for(j=0;j<10;j++)
for(i=0;i<2;i++)
b[j][i]=0;
if(z>1)
{
count++;
for(i=low-1;i<high;i++)
sum=sum+a[i];
sum1=a[low-1];
sum=sum-a[low-1];
for(i=low;i<=high;i++)
{
dif=sum-sum1;
sum1=a[i]+sum1;
sum=sum-a[i];
b[l][0]=abs(dif);
b[l][1]=i;
l++;
}
for(i=0;i<l;i++)
if(min>b[i][0])
{
min=b[i][0];
k=b[i][1];
}
for(i=low-1;i<k;i++)
c[i][col]='0';
for(i=k;i<high;i++)
c[i][col]='1';
col++;
part(low,k);
part(k+1,high);
}
else
{
c[low][col]='1';
c[high][col]='0';
if(c[high+1][col]=='*'&&high<=9)
while(c[high+1][col]=='*')
col--;
col++;
}
}
