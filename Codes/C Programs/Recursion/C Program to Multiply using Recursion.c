#include<stdio.h>
int multiply(int,int);
int main()
{
    int a,b,p;
    printf("Enter any two integers: ");
    scanf("%d%d",&a,&b);
    p = multiply(a,b);
    printf("Multiplication of two integers is %d",p);
    return 0;
}
int multiply(int a,int b)
{
    static int p=0,i=0;
    if(i < a)
        {
            p = p+ b;
            i++;
            multiply(a,b);
        }
    return p;
}