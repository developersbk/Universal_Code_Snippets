#include<stdio.h>
void main()
{
    void max();
    max();
}
void max()
{
    int a[5],max,n,i;
    printf("How many no’s you want to enter: ");
    scanf("%d",&n);
    printf("Enter element for the array: ");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    max=a[0];
    for(i=1; i<5; i++)
        {
            if(max<a[i])
                max=a[i];
        }
    printf("maximum no= %d",max);
}