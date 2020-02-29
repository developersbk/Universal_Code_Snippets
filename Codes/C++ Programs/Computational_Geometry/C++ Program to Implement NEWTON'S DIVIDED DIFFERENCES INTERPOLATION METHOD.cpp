

/*------------ NEWTON'S DIVIDED DIFFERENCES INTERPOLATION METHOD --------*/

/*	THE PROGRAM GENERATES A DIVIDED DIFFERENCES TABLE FROM GIVEN

	DATA, AND IT CALCULATES  THE VALUE OF f(x) AT GIVEN VALUE

	OF xr.

	INPUTS :  1) Number of entries of the data.

		  2) Values of 'x' & corresponding y = f(x).

		  3) Value of xr at which f(x) is to be interpolated.

		  VALUES OF x NEED NOT BE EQUALLY SPACED.

	OUTPUTS : Interpolated value of f(x) at x = xr.                        */

/*------------------------------    PROGRAM  ----------------------------*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    double y[20][20],x[20],sum,fy,xr;
    /* ARRAY OF y[n][n] ELEMENTS FOR DIVIDED DIFFERENCE TABLE */
    int i,j,k,n,t,m;
    clrscr();
    printf("\n     NEWTON'S DIVIDED DIFFERENCES INTERPOLATION METHOD");
    printf("\n\nEnter the number of entries (max 20) = ");
    /* ENTER THE NUMBER OF ENTRIES IN THE TABLE   */
    scanf("%d",&n);
    for(i = 0; i < n; i++)
        {
            /*  LOOP TO GET x AND y = f(x) IN THE TABLE   */
            printf("x%d = ",i);
            scanf("%lf",&x[i]);
            printf("           y%d = ",i);
            scanf("%lf",&y[i][0]);
        }
    printf("\nEnter the value of xr at which y = f(x) is to be"
           " calculated xr = ");
    scanf("%lf",&xr);
    k = n;
    for(j = 1; j < n; j++)
        {
            /*  LOOP TO CALCULATE DIVIDED DIFFERENCES IN THE TABLE  */
            k = k - 1;
            for(i = 0; i < k; i++)
                {
                    y[i][j] = (y[i+1][j-1] - y[i][j-1])/(x[i+j]-x[i]);
                }
        }
    sum = 0;
    for(t = 1; t < n; t++)
        {
            /* LOOP TO CALCULATE INTERPOLATED VALUE OF 'y'  */
            fy = 1;
            for(m = 0; m < t; m++)
                {
                    fy = fy * (xr - x[m]);
                }
            sum = sum + (fy * y[0][t]);
        }
    sum = sum + y[0][0];
    printf("\nThe interpolated value of y at xr = %lf"
           " is yr = %lf\n",xr,sum);
}
/*--------------------  END OF PROGRAM  ---------------------------------*/
