/*
 1
 1 2
 3 5 8
 13 21 34 55
 89 144 233 377 610
*/
#include<stdio.h>
int fib(int);
void main()
{
    int i,j,k=1;
    for(i=1; i<=5; i++)
        {
            for(j=1; j<=i; j++)
                {
                    printf("%d ",fib(k++));
                }
            printf("\n");
        }
}

int fib(int n)
{
    if(n<=1)
        return n;
    return(fib(n-1)+fib(n-2));
}