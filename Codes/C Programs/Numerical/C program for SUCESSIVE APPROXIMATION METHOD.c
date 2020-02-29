#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int user_power,i=0,cnt=0,flag=0;
int coef[10]= {0};
float x1=0,x2=0,t=0;
float fx1=0,fdx1=0;

void main()
{
    clrscr();
    printf("\n\n\t\t\t PROGRAM FOR SUCESSIVE APPROXIMATION");
    printf("\n\n\n\tENTER THE TOTAL NO. OF POWER:::: ");
    scanf("%d",&user_power);
    for(i=0; i<=user_power; i++)
        {
            printf("\n\t x^%d::",i);
            scanf("%d",&coef[i]);
        }
    printf("\n");
    printf("\n\t THE POLYNOMIAL IS ::: ");
    for(i=user_power; i>=0; i--) //printing coeff.
        {
            printf(" %dx^%d",coef[i],i);
        }
    printf("\n\tINTIAL X1---->");
    scanf("%f",&x1);
    printf("\n ******************************************************");
    printf("\n ITERATION    X1    FX1    F'X1  ");
    printf("\n **********************************************************");
    do
        {
            cnt++;
            fx1=fdx1=0;
            t=x1;
            for(i=user_power; i>=0; i--)
                {
                    fdx1+=coef[i]* (i*pow(x1,(i-1)));
                }
            printf("\n %d         %.3f  %.3f  %.3f ",cnt,x1,fx1,fdx1);
            x1=fdx1;
        }
    while((fabs(t - x1))>=0.0001);
    printf("\n\t THE ROOT OF EQUATION IS %f",x2);
    getch();
}

/*******************************OUTPUT**********************************

            PROGRAM FOR NEWTON RAPHSON GENERAL


    ENTER THE TOTAL NO. OF POWER:::: 3

     x^0::-3

     x^1::-1

     x^2::0

     x^3::1


     THE POLYNOMIAL IS :::  1x^3 0x^2 -1x^1 -3x^0

     INTIAL X1---->3

 **************************************
 ITERATION    X1    FX1    F'X1
 **************************************
 1         2.192  21.000 26.000
 2         1.794  5.344  13.419
 3         1.681  0.980  8.656
 4         1.672  0.068  7.475
 5         1.672  0.000  7.384
 **************************************

     THE ROOT OF EQUATION IS 1.671700