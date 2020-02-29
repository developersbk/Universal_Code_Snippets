#include<stdio.h>
void  main()
{
    long int dn,remainder,q;
    int on[100],i=1,j;
    printf("Enter any decimal number");
    scanf("%ld",&dn);
    q = dn;
    while(q!=0)
        {
            on[i++]= q % 8;
            q = q/ 8;
        }
    printf("Equivalent octal value  %d: ",dn);
    for(j = i -1 ; j> 0; j--)
        printf("%d",on[j]);
}