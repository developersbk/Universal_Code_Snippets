/*Floyd's triangle
 Floyd's triangle is a right angled-triangle using the natural numbers. Examples of Floyd’s triangle:
 Example
 1
 2 3
 4 5 6
 7 8 9 10
*/
#include<stdio.h>
void main()
{
    int i,j,r,k=1;
    printf("Enter the range: ");
    scanf("%d",&r);
    printf("FLOYD'S TRIANGLE\n\n");
    for(i=1; i<=r; i++)
        {
            for(j=1; j<=i; j++,k++)
                printf(" %d",k);
            printf("\n");
        }
}