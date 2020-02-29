/*Series and find sum of 1+3+5+...+n */
#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter any no: ");
    scanf("%d",&n);
    for(i=1; i<n; i=i+2)
        {
            printf("%d+",i);
            sum=sum+i;
        }
    printf("%d",n);
    printf("\nsum=%d",sum+n);
}
Output:
Enter any no: 7
1+3+5+7
Sum=16