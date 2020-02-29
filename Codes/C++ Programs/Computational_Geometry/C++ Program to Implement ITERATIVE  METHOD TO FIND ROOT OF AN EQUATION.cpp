
/*-------------- ITERATIVE  METHOD TO FIND ROOT OF AN EQUATION  -------*/

/*	THE FUNCTION p(x) FOR AN EQUATION IS DEFINED IN function fx

	THE EQUATION IS,

		  x = 1 + 0.3*cos(x)

	       p(x) = 1 + 0.3*cos(x)

	     i.e. x = p(x)

	INPUTS :  1) Initial approximation x0 to the root.

		  2) Number of iterations.

	OUTPUTS : Value of the root.                                     */

/*------------------------------    PROGRAM  ----------------------------*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    double px ( double x);      /* DECLARATION OF  FUNCTION  */
    double x0,x1,p0;
    int n,i;
    clrscr();
    printf("\n        ITERATIVE METHOD TO FIND ROOT OF AN EQUATION");
    printf("\n\n                    x = 1 + 0.3*cos(x)\n"
           "                 p(x) = 1 + 0.3*cos(x)\n");
    printf("\n\nEnter the value of initial "
           "approximation  x0 = ");
    scanf("%lf",&x0);
    /* INITIAL APPROXIMATION x0 IS TO BE ENTERED HERE */
    printf("\nEnter the number of iterations = ");
    scanf("%d",&n);
    printf("\npress any key for display of iterations...\n");
    getch();
    i = 0;
    while(n-- > 0)
        {
            x1 = px(x0);      /*     CALCULATION OF NEXT APPROXIMATION    */
            i++;
            printf("\n%d          x%d = %10.10lf",i,i,x1);
            x0 = x1;
            getch();
        }
    printf("\n\nThe value of root is = %20.15lf",x1);	   /*   ROOT   */
}
/*---------- FUNCTION PROCEDURE TO CALCULATE VALUE OF EQUATION --------*/

double px ( double x)
{
    double p;
    p = 1 + 0.3*cos(x);          /*      FUNCTION p(x)   */
    return(p);
}
/*----------------------------- END OF PROGRAM -------------------------*/
