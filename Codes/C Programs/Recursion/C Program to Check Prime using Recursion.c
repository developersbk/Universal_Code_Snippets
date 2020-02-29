#include<stdio.h>
int checkprime(int,int);
int main()
{
    int num,prime;
    printf("Enter a number: ");
    scanf("%d",&num);
    prime = checkprime(num,num/2);
    if(prime==1)
        printf("%d is a prime number",num);
    else
        printf("%d is not a prime number",num);
    return 0;
}
int checkprime(int num,int i)
{
    if(i==1)
        {
            return 1;
        }
    else
        {
            if(num%i==0)
                return 0;
            else
                checkprime(num,i-1);
        }
}