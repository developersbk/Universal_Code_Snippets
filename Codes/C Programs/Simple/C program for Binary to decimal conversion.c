/*binary to decimal conversion:*/
#include<stdio.h>
void main()
{
    long int bn,dn=0,j=1,remainder;
    printf("Enter any number any binary number: ");
    scanf("%ld",&bn);
    while(bn!=0)
        {
            remainder=bn%10;
            dn=dn+remainder*j;
            j=j*2;
            bn=bn/10;
        }
    printf("Equivalent decimal value: %ld",dn);
}