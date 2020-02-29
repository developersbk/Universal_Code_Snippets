/*Sum of series 1+1/2+1/3+....+1/n*/
#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter any no: ");
    scanf("%d",&n);
    printf("1");
    for(i=2; i<=n-1; i++)
        printf(" 1/%d +",i);
    for(i=1; i<=n; i++)
        sum=sum+i;
    printf(" 1/%d",n);
    printf("\nSum=1/%d",sum+1/n);
}
Output:
Enter any no: 7
1 + 1/2 + 1/3 + 1/4 + 1/5 + 1/6 + 1/7
Sum=1/28