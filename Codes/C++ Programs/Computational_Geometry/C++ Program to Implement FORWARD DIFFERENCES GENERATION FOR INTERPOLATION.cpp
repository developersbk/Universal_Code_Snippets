

/*-------------- FORWARD DIFFERENCES GENERATION FOR INTERPOLATION -----*/

/*	THE PROGRAM GENERATES A FORWARD DIFFERENCES TABLE FROM GIVEN

	DATA.  THE VALUES OF x AND CORRESPONDING y = f(x) ARE TO BE

	ENTERED IN THE ARRAY FORMAT.

	INPUTS :  1) Number of entries of the data.

		  2) Values of 'x' & corresponding y = f(x).

	OUTPUTS : forward difference table array.                      */

/*------------------------------    PROGRAM  --------------------------*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    double y[20][20],x[20];
    /* ARRAY OF y[n][n] ELEMENTS FOR FORWARD DIFFERENCE TABLE */
    int i,j,k,n;
    clrscr();
    printf("\n\tFORWARD DIFFERENCES GENERATION FOR INTERPOLATION");
    printf("\n\n  The form of equation is y = f(x)\n");
    printf("\n\nEnter the number of entries (max 20) = ");
    /* ENTER THE NUMBER OF ENTRIES IN THE TABLE */
    scanf("%d",&n);
    for(i = 0; i < n; i++)
        {
            /*  LOOP TO GET x AND y = f(x) IN THE TABLE */
            printf("x%d = ",i);
            scanf("%lf",&x[i]);
            printf("           y%d = ",i);
            scanf("%lf",&y[i][0]);
        }
    k = n;
    for(j = 1; j < n; j++)
        {
            /*  LOOP TO CALCULATE FORWARD DIFFERENCES IN THE TABLE  */
            k = k - 1;
            for(i = 0; i < k; i++)
                {
                    y[i][j] = y[i+1][j-1] - y[i][j-1];
                }
        }
    k = n;
    clrscr();
    printf("\n The forward difference table is as follows . . .\n");
    printf("\n\tx\ty\tDy\tD2y\tD3y\tD4y\tD5y\tD6y\n");
    for(i = 0; i < n; i++)
        {
            /*  LOOP TO PRINT FORWARD DIFFERENCES IN THE TABLE  */
            printf("\nx%d = %4.2lf",i,x[i]);
            for(j = 0; j < k; j++)
                {
                    printf("\t%4.2lf ",y[i][j]);
                }
            k = k - 1;
            printf("\n");
        }
}
/*--------------------  End of program---------------------------------*/
