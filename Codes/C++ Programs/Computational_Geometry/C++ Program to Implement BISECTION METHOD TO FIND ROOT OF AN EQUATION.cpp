

/*------------ BISECTION METHOD TO FIND ROOT OF AN EQUATION  ----------*/

/*	THE EXPRESSION FOR AN EQUATION IS DEFINED IN function fx
	YOU CAN WRITE DIFFERENT EQUATION IN function fx.
	HERE,
		  f(x) = x*x*x - 1.8*x*x - 10*x - 17

	INPUTS :  1) Initial interval [a,b] in which root is to
		     be found.
		  2) Permissible error in the root.

	OUTPUTS : 1) Number of iterations for given interval and
		     permissible error.
		  3) Value of the root in given interval.              */

/*------------------------------    PROGRAM  --------------------------*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    double fx ( double x);		/* DECLARATION OF  FUNCTION    */
    double x,a,b,fa,fb,c,fc,err;
    int n,i;
    clrscr();
    printf("\n        BISECTION METHOD TO FIND ROOT OF AN EQUATION");
    printf("\n\n            f(x) = x*x*x - 1.8*x*x - 10*x - 17");
    printf("\n\nEnter an interval [a,b] in "
           "which root is to be found");
    printf("\na = ");
    scanf("%lf",&a);     /* INTERVAL [a,b] IS TO BE ENTERED HERE     */
    printf("b = ");
    scanf("%lf",&b);
    printf("\nEnter the value of permissible error = ");
    scanf("%lf",&err);
    n = (log10(abs(b - a)) - log10( err ) )/log10(2);
    /* CALCULATION OF STEPS 'n'    */
    n = n + 1;      /* n SHOULD NOT BE A FRACTIONAL NUMBER;  ADD '1' */
    i = 0;
    printf("\nNumber of iterations for this error bound are = %d",n);
    printf("\n\npress any key for step by step display of intervals");
    getch();
    printf("\n\n                 RESULTS OF BISECTION METHOD\n");
    while(n-- > 0)
        {
            fa = fx(a);           /*     CALCULATE f(x) AT x = a          */
            fb = fx(b);           /*     CALCULATE f(x) AT x = b          */
            c = (a + b)/2;        /*     CENTER OF THE INTERVAL           */
            fc = fx(c);           /*     CALCULATE f(x) AT x = c          */
            i++;
            printf("\n\n%d    a = %lf        b = %lf        c = %lf",i,a,b,c);
            printf("\n  f(a) = %lf     f(b) = %lf         f(c) = %lf",fa,fb,fc);
            if( (fc*fa) < 0) b = c; /* IF f(c)f(a) < 0, NEW INTERVAL IS [a,c]  */
            if( (fc*fb) < 0) a = c; /* IF f(c)f(b) < 0, NEW INTERVAL IS [b,c]  */
            printf("\n                       interval : a = %lf     b = %lf",a,b);
            getch();
        }
    x = a + (b - a)/2;     /* ROOT  = a + half interval [a,b]         */
    printf("\nThe value of root is = %20.15lf",x);       /*   ROOT    */
}
/*---------- FUNCTION PROCEDURE TO CALCULATE VALUE OF EQUATION --------*/

double fx ( double x)
{
    double f;
    f = x*x*x - 1.8*x*x - 10*x + 17;          /*      FUNCTION f(x)   */
    return(f);
}
/*------------------------ END OF PROGRAM  -----------------------------*/
