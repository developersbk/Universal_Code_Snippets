/*
 * C Program to find the sum of series 1^2 + 2^2 + …. + n^2.
 */
#include <stdio.h>

int main()
{
    int number, i;
    int sum = 0;
    printf("Enter maximum values of series number: ");
    scanf("%d", &number);
    sum = (number * (number + 1) * (2 * number + 1 )) / 6;
    printf("Sum of the above given series : ");
    for (i = 1; i <= number; i++)
        {
            if (i != number)
                printf("%d^2 + ", i);
            else
                printf("%d^2 = %d ", i, sum);
        }
    return 0;
}