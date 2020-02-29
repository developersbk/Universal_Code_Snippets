/*
 4444444
 4333334
 4322234
 4321234
 4322234
 4333334
 4444444
*/
#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=4; i>=1; i--)
        {
            for(j=4; j>=i; j--)
                printf("%d",j);
            for(j=1; j<(i*2)-1; j++)
                printf("%d",i);
            for(j=i+1; j<=4; j++)
                printf("%d",j);
            printf("\n");
        }
    for(i=2; i<=4; i++)
        {
            for(j=4; j>=i; j--)
                printf("%d",j);
            for(j=1; j<(i*2)-1; j++)
                printf("%d",i);
            for(j=i+1; j<=4; j++)
                printf("%d",j);
            printf("\n");
        }
}