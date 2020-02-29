/*
 * C program to read two integers M and N and to swap their values.
 * Use a user-defined function for swapping. Output the values of M
 * and N before and after swapping.
 */
#include <stdio.h>
void swap(float *ptr1, float  *ptr2);

void main()
{
    float m, n;
    printf("Enter the values of M and N \n");
    scanf("%f %f", &m, &n);
    printf("Before Swapping:M = %5.2ftN = %5.2f\n", m, n);
    swap(&m, &n);
    printf("After Swapping:M  = %5.2ftN = %5.2f\n", m, n);
}
/*  Function swap - to interchanges the contents of two items */
void swap(float *ptr1, float *ptr2)
{
    float temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}