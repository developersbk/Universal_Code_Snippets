/*
 * C program to multiply given number by 4 using bitwise operators
 */
#include <stdio.h>

void main()
{
    long number, tempnum;
    printf("Enter an integer \n");
    scanf("%ld", &number);
    tempnum = number;
    /*  left shift by two bits */
    number = number << 2;
    printf("%ld x 4 = %ld\n", tempnum, number);
}