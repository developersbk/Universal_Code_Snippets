/*--

     *
    ***
   *****
  *******
 *********

--*/
#include<stdio.h>
void  main()
{
    int i, j, n;
    printf("Enter no. of rows: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        {
            for(j=i; j<n; j++)
                {
                    printf(" ");
                }
            for(j=1; j<(i*2); j++)
                {
                    printf("*");
                }
            printf("\n");
        }
}