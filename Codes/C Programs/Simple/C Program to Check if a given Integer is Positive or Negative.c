/*
 * C program to check whether a given integer is positive
 * or negative
 */
#include <stdio.h>

void main()
{
    int number;
    printf("Enter a number \n");
    scanf("%d", &number);
    if (number >= 0)
        printf("%d is a positive number \n", number);
    else
        printf("%d is a negative number \n", number);
}