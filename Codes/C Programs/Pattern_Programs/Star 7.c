/*--

 ********
 *      *
 *      *
 ********

--*/
#include<stdio.h>
void main()
{
    int cols,rows,r,c,s;
    printf("Enter no. of columns: ");
    scanf("%d", &cols);
    printf("Enter no. of rows: ");
    scanf("%d", &rows);
    for(r=1; r<=cols; r++)
        printf("*");
    printf("\n");
    for(c=1; c<=rows-2; c++)
        {
            printf("*");
            for(s=1; s<=cols-2; s++)
                printf(" ");
            printf("*\n");
        }
    for(r=1; r<=cols; r++)
        printf("*");
}