

/*------- MODIFIED EULER'S METHOD TO SOLVE DIFFERENTIAL EQUATION ------*/

/*	THIS PROGRAM CALCULATES THE VALUE y AT GIVEN VALUE OF x
	USING MODIFIED EULER'S METHOD. THE FUNCTION y' = f(x,y) IS
	DEFINED IN THE PROGRAM.

		      y' = x*x + y
	Hence     f(x,y) = x*x + y

	INPUTS :  1) Initial values of x and y.

		  2) Step size h.

	OUTPUTS : Calculated values of y at every step.                */

/*------------------------------    PROGRAM  --------------------------*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    double f (double x0,double y0);  /* DECLARATION OF A FUNCTION f  */
    double y0,y1,y10,x0,x1,h,x,diff;
    int i,n;
    clrscr();
    printf("\n\tMODIFIED EULER'S METHOD TO SOLVE DIFFERENTIAL EQUATION");
    printf("\n\nEnter x0 = ");
    scanf("%lf",&x0);                         /* ENTER VALUE OF x0   */
    printf("\n\nEnter y0 = ");
    scanf("%lf",&y0);                         /* ENTER VALUE OF y0   */
    printf("\n\nEnter the value of x at which y is to be found = ");
    scanf("%lf",&x);                          /* ENTER VALUE OF x    */
    printf("\n\nEnter the value of h = ");
    scanf("%lf",&h);                    /*    ENTER THE VALUE OF h   */
    i = 0;
    printf("\nPress any key to see step by step display of results...\n");
    while(x0 < x) /* LOOP TO CALCULATE y USING MODIFIED EULER'S FORMULA*/
        {
            i++;
            x1 = x0 + h;
            y1 = y0 + h * f(x0,y0);       /* PREDICTOR EQUATION */
            y10 = y1;
            do           /* LOOP TO IMPLEMENT CORRECTOR FORMULA */
                {
                    y1 = y0 + (h/2) * ( f(x0,y0) + f(x1,y10) );
                    diff = fabs(y1 - y10);  /* CHECK FOR HOW MANY DIGITS
					ARE REPEATING AFTER DECIMAL POINT*/
                    y10 = y1;
                }
            while( diff > 0.0001);
            /*REMAIN IN LOOP TILL 3 DIGITS REPEAT AFTER DECIMAL POINT*/
            printf("\nx%d = %lf      y%d = %lf",i,x1,i,y1);
            x0 = x1;
            y0 = y1;
            getch();
        }
}
/*---------------------------------------------------------------------*/

double f ( double x,double y)  /* FUNCTION TO CALCULATE VALUE OF f(x,y)*/
{
    double y_dash;
    y_dash = x*x + y;           /*    function f(x,y) = y' = x*x + y   */
    return(y_dash);
}
/*------------------------ END OF PROGRAM -----------------------------*/
