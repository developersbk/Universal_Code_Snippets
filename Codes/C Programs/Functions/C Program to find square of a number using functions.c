#include<stdio.h>
void main()
{
    int rev(int);
    int r,a;
    clrscr();
    printf("enter any no: ");
    scanf("%d",&a);
    r=rev(a);
    printf("square is : %d",r);
}
int rev(int x)
{
    return(x*x);
}