#include<stdio.h>
int main()
{
    int n,r,ncr;
    printf("Enter any two numbers->");
    scanf("%d %d",&n,&r);
    ncr=fact(n)/(fact(r)*fact(n-r));
    printf("The NCR factor of %d and %d is %d",n,r,ncr);
    return 0;
}
int fact(int n)
{
    int i=1;
    while(n!=0)
        {
            i=i*n;
            n--;
        }
    return i;
}