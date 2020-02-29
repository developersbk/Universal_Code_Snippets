#include<stdio.h>
void main()
{
    void swap(int,int);
    int a,b,r;
    printf("enter value for a&b: ");
    scanf("%d%d",&a,&b);
    swap(a,b);
}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("after swapping the value for a & b is : %d %d",a,b);
}