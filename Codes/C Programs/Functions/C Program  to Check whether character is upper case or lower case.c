#include<stdio.h>
void check(char);
void main()
{
    char ch;
    printf("enter any character");
    scanf("%c",&ch);
    check(ch);
}
void check(char c)
{
    if(ch>=65&&ch<=90)
        printf("char is upper case");
    else if(ch>=97&&ch<=122)
        printf("character is lower case");
}