#include<stdio.h>

int main()
{
    int m, n;
    int p, q;
    printf("Enter the dimensions of first matrix: ");
    scanf("%d%d", &m, &n);
    printf("\nEnter the dimensions of second matrix: ");
    scanf("%d%d", &p, &q);
    if( n != p )
        {
            printf("\nTwo matrices CANNOT be multiplied !!!");
        }
    else
        printf("\nTwo matrices meet the criteria for Multiplication !!!");
    return 0;
}