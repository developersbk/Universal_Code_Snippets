/*
 * C program to find the frequency of odd numbers
 * and even numbers in the input of a matrix
 */
#include <stdio.h>

void main()
{
    static int array[10][10];
    int i, j, m, n, even = 0, odd = 0;
    printf("Enter the order ofthe matrix \n");
    scanf("%d %d", &m, &n);
    printf("Enter the coefficients of matrix \n");
    for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
                {
                    scanf("%d", &array[i][j]);
                    if ((array[i][j] % 2) == 0)
                        {
                            ++even;
                        }
                    else
                        ++odd;
                }
        }
    printf("The given matrix is \n");
    for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
                {
                    printf(" %d", array[i][j]);
                }
            printf("\n");
        }
    printf("\n The frequency of occurance of odd number  = %d \n", odd);
    printf("The frequency of occurance of even number = %d\n", even);
}