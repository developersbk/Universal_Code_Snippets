#include<stdio.h>
int findlcm(int,int);
int main()
{
    int a,b,l;
    printf("Enter any two number ");
    scanf("%d%d",&a,&b);
    if(a>b)
        l = findlcm(a,b);
    else
        l =findlcm(b,a);
    printf("LCM of two number is %d",l);
    return 0;
}
int findlcm(int a,int b)
{
    static int temp = 1;
    if(temp % b == 0 && temp % a == 0)
        return temp;
    temp++;
    findlcm(a,b);
    return temp;
}