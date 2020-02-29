

/*----- CALCULATION OF TRUNCATION ERROR OF SERIES APPROXIMATION -------*/

/*		EXPONENTIAL SERIES exp(x) IS USED HERE

	INPUTS :  1) The total number of terms to be computed
		     in series starting from first term.
		  2) The value of 'x' in exp(x).

	OUTPUTS : 1) Computed value of series approximation of exp(x).
		  2) Actual value of exp(x) function.
		  3) Absolute error between series approximation and
		     actual value of exp(x) function.                  */

/*------------------------------    PROGRAM  --------------------------*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    double fact ( int n);      /* DECLARATION OF  FACTORIAL FUNCTION */
    double x,sum,z,sum1;
    int n,i;
    clrscr();
    printf("\n\t\tCALCULATION OF TRUNCATION ERROR "
           "OF SERIES APPROXIMATION");
    printf("\n\nGive number of terms "
           "in series to be computed = ");
    scanf("%d",&n);     /* NUMBER OF TERMS TO BE COMPUTED IN SERIES  */
    n = n - 1;   /* TERMS ARE COMPUTED FROM ZERO HENCE 'n-1'         */
    printf("\nGive value of x = ");
    scanf("%lf",&x);   /* VALUE OF  'x'  */
    sum = 0;
    sum1 = 0;
    for(i = 0; i<=n; i++)
        {
            z = fact(i);
            sum = pow(x,(double)i)/z;
            sum1 = sum1 + sum;
        }
    printf("\nThe computed value of exp(x) "
           "function is = %1.15lf",sum1);        /* COMPUTED VALUE  */
    printf("\n\nThe actual value of exp(x) "
           "function is = %1.15lf",exp(x));        /* ACTUAL VALUE  */
    printf("\n\nTruncation error in series "
           "approximation is = %1.15lf", exp(x)-sum1);      /* ERROR */
}
/*------------- FUNCTION PROCEDURE TO CALCULATE FACTORIAL -------------*/

double fact( int n)
{
    double facto;
    facto = 1;
    if(n == 0) return( facto = 1);
    do
        {
            facto = facto * n;
        }
    while(n-- > 1);
    return(facto);
}
/*-----------------------  END OF PROGRAM  ----------------------------*/
