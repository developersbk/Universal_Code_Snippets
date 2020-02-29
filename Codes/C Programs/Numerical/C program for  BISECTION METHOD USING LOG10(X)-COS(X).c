#include<stdio.h>
#include<conio.h>
#include<math.h>
#define epsil 0.0001

int p,c[10];

void appro();
void bisection(float,float,float,float);

float fun(float x)
{
    int i;
    float y=0.0;
    y=log10(x)-cos(x);
    return y;
}

void main()
{
    int i;
    clrscr();
    appro();
    getch();
}

void bisection(float x1,float x2,float fx1,float fx2)
{
    float x3,fx3;
    int n=1;
    if(fx1<0&&fx2>0||fx1>0&&fx2<0)
        {
            printf("******************************************************************\n");
            printf("\nIt   x1        fx1        x2         fx2        x3         fx3\n");
            printf("******************************************************************\n");
            do
                {
                    x3=(x1+x2)/2;
                    fx3=fun(x3);
                    if(fx3==0)
                        {
                            break;
                        }
                    if((fx1*fx3)>0)
                        {
                            x1=x3;
                            fx1=fx3;
                        }
                    else
                        {
                            x2=x3;
                            fx2=fx3;
                        }
                    printf("%d   %.4f    %.4f     %.4f    %.4f    %.4f     %.4f\n",n,x1,fx1,x2,fx2,x3,fx3);
                    n=n+1;
                }
            while((fabs(x1-x2)>epsil)&&(fx3!=0));
            printf("\n\t\t********************\n");
            printf("\n\t\tThe root is %.4f\n",x3);
            printf("\t\t********************\n");
        }
    else
        {
            clrscr();
            printf("\nError in the Initial approximation\n ");
            printf("\nPlease enter right approximation\n\n");
            appro();
        }
}

void appro()
{
    float x1,x2,x3,fx1,fx2,fx3;
    printf("\nPlease Enter first approximation: ");
    scanf("%f",&x1);
    printf("\nPlease Enter first approximation: ");
    scanf("%f",&x2);
    fx1=fun(x1);
    fx2=fun(x2);
    bisection(x1,x2,fx1,fx2);
}
/*************************************OUTPUT**************************************

Please Enter first approximation: 1

Please Enter first approximation: 2
******************************************************************

It   x1        fx1        x2         fx2        x3         fx3
******************************************************************
1   1.0000    -0.5403     1.5000    0.1054    1.5000     0.1054
2   1.2500    -0.2184     1.5000    0.1054    1.2500     -0.2184
3   1.3750    -0.0562     1.5000    0.1054    1.3750     -0.0562
4   1.3750    -0.0562     1.4375    0.0247    1.4375     0.0247
5   1.4062    -0.0157     1.4375    0.0247    1.4062     -0.0157
6   1.4062    -0.0157     1.4219    0.0045    1.4219     0.0045
7   1.4141    -0.0056     1.4219    0.0045    1.4141     -0.0056
8   1.4180    -0.0006     1.4219    0.0045    1.4180     -0.0006
9   1.4180    -0.0006     1.4199    0.0020    1.4199     0.0020
10   1.4180    -0.0006     1.4189    0.0007    1.4189     0.0007
11   1.4180    -0.0006     1.4185    0.0001    1.4185     0.0001
12   1.4182    -0.0003     1.4185    0.0001    1.4182     -0.0003
13   1.4183    -0.0001     1.4185    0.0001    1.4183     -0.0001
14   1.4184    -0.0000     1.4185    0.0001    1.4184     -0.0000

                    ********************
                       The root is 1.4184
                       ********************
************************************************************************/