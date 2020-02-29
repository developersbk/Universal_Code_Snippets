/*
 1
 3  5  7
 9 11  13  15  17  19
*/
#include<stdio.h>
void  main()
{
    int n=2,r,c,z=3;
    printf("1\n");
    for(r=1; r<=2; r++)
        {
            for(c=1; c<=r*3; c++,z=z+2)
                printf("%d ",z);
            printf("\n");
        }
}