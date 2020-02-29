
/*-------------- BACKWARD DIFFERENCES GENERATION FOR INTERPOLATION ----*/

/*	THE PROGRAM GENERATES A BACKWARD DIFFERENCES TABLE FROM GIVEN

	DATA.  THE VALUES OF x AND CORRESPONDING y = f(x) ARE TO BE

	ENTERED IN THE ARRAY FORMAT.

	INPUTS :  1) Number of entries of the data.

		  2) Values of 'x' & corresponding y = f(x).

	OUTPUTS : Backward difference table array.                     */

/*------------------------------    PROGRAM  --------------------------*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    double y[20][20],x[20];
    /* ARRAY OF N*N ELEMENTS FOR BACKWARD DIFFERENCE TABLE  */
    int i,j,k,n;
    clrscr();
    printf("\n\tBACKWARD DIFFERENCES GENERATION FOR INTERPOLATION");
    printf("\n\n  The form of equation is y = f(x)\n");
    printf("\n\nEnter the number of entries (max 20) = ");
    scanf("%d",&n);	/* ENTER NUMBER OF ENTRIES IN THE TABLE    */
    for(i = 0; i < n; i++)
        {
            /* LOOP TO GET x AND y = f(x) IN THE TABLE */
            printf("x%d = ",i);
            scanf("%lf",&x[i]);
            printf("           y%d = ",i);
            scanf("%lf",&y[i][0]);
        }
    k = 0;
    for(j = 1; j < n; j++)
        {
            /*  LOOP TO CALCULATE BACKWARD DIFFERENCES */
            k++;
            for(i = n-1; i >= k; i--)
                {
                    y[i][j] = y[i][j-1] - y[i-1][j-1];
                }
        }
    k = n ;
    clrscr();
    printf("\n The backward difference table is as follows . . .\n");
    printf("\n\tx\ty\tDy\tD2y\tD3y\tD4y\tD5y\tD6y\n");
    for(i = 0; i < n; i++)
        {
            /*  LOOP TO PRINT BACKWARD DIFFERENCES  */
            printf("\nx%d = %4.2lf",i,x[i]);
            for(j = 0; j < i+1; j++)
                {
                    printf("\t%4.2lf ",y[i][j]);
                }
            printf("\n");
        }
}
/*------------------------------End of program-------------------------*/