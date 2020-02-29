/*
 * C Program to Display Lower Triangular Matrix
 */
#include <stdio.h>

void main()
{
    int array[3][3], i, j, flag = 0 ;
    printf("\n\t Enter the value of Matrix : ");
    for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                {
                    scanf("%d", &array[i][j]);
                }
        }
    for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                {
                    if (array[i] < array[j] && array[i][j] == 0)
                        {
                            flag = flag + 1;
                        }
                }
        }
    if (flag == 3)
        printf("\n\n Matrix is a Lower triangular matrix");
    else
        printf("\n\n Matrix is not a lower triangular matrix");
}