/*(1^1) + (2^2) + (3^3) + (4^4) + (5^5) + ... + (n^n)*/
#include<stdio.h>
#include<math.h>
long power(int a, int b)
{
    long i, p=1;
    for(i=1; i<=b; i++)
        {
            p=p*a;
        }
    return p;
}

int main()
{
    long i,n,sum=0;
    printf("Enter value of n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        {
            sum=sum+power(i,i);
        }
    printf("Sum: %d",sum);
    return 0;
}