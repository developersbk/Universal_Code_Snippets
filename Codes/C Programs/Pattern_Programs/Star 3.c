/*--

 *****
  ****
   ***
    **
     *

--*/
#include<stdio.h>
void  main()
{
    int i, j,n;
    printf("Enter no. of rows: ");
    scanf("%d",&n);
    for(i=n; i>=1; i--)
        {
            for(j=n; j>i; j--)
                {
                    printf(" ");
                }
            for(j=1; j<=i; j++)
                {
                    printf("*");
                }
            printf("\n");
        }
}