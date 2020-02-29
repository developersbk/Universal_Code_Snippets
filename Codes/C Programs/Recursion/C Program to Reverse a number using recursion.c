#include<stdio.h>
int main()
{
    int num,reverse;
    printf("Enter any number: ");
    scanf("%d",&num);
    reverse=rev(num);
    printf("Reverse of number: %d",reverse);
    return 0;
}
int rev(int num)
{
    static sum,r;
    if(num)
        {
            r=num%10;
            sum=sum*10+r;
            rev(num/10);
        }
    else
        return 0;
    return sum;
}
Sample output:
Enter any number: 784
Reverse of number: 48