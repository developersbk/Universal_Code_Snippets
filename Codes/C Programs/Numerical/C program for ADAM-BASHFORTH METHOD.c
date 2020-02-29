#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 20

float equation(float x,float y)
{
    return(1+(y*y));
}

void main()
{
    FILE *fp;
    int i=0,count=-1;
    float lower,upper,h,y1,xvalue[MAX],yvalue[MAX],result;
    float function[MAX],search,final,temp;
    fp=fopen("admbsh.dat","w");
    clrscr();
    printf("ADAM-BASHFORTH METHOD ");
    fprintf(fp,"ADAM-BASHFORTH METHOD ");
    printf("\n");
    fprintf(fp,"\n");
    printf("\nEnter the lower bound of x  :  ");
    fprintf(fp,"\nEnter the lower bound of x  :  ");
    scanf("%f",&lower);
    fprintf(fp,"%f",lower);
    printf("\nEnter the upper bound of x  :  ");
    fprintf(fp,"\nEnter the upper bound of x  :  ");
    scanf("%f",&upper);
    fprintf(fp,"%f",upper);
    printf("\nEnter the value of y(lower) :  ");
    fprintf(fp,"\nEnter the value of y(lower) :  ");
    scanf("%f",&y1);
    fprintf(fp,"%f",y1);
    printf("\nEnter the value of h        :  ");
    fprintf(fp,"\nEnter the value of h        :  ");
    scanf("%f",&h);
    fprintf(fp,"%f",h);
    printf("\nEnter the value of x for which you want to find y :");
    fprintf(fp,"\nEnter the value of x for which you want to find y :");
    scanf("%f",&search);
    fprintf(fp,"%f",search);
    xvalue[i]=lower;
    yvalue[i]=y1;
    for(i=0; xvalue[i]<=upper; i++)
        {
            xvalue[i+1]=xvalue[i]+h;
        }
    for(i=0; xvalue[i]<=upper; i++)
        {
            result=equation(xvalue[i],yvalue[i]);
            yvalue[i+1]=yvalue[i]+(h*result);
        }
    printf("\n\n");
    fprintf(fp,"\n\n");
    printf("The table is   ");
    fprintf(fp,"The table is   ");
    printf("\n\n");
    fprintf(fp,"\n\n");
    printf(" i     x       y      f(x,y)   ");
    fprintf(fp," i     x       y      f(x,y)   ");
    printf("\n\n");
    fprintf(fp,"\n\n");
    for(i=0; xvalue[i]<=upper; i++)
        {
            function[i]=equation(xvalue[i],yvalue[i]);
            printf(" %d.  %.4f  %.4f  %.4f ",i,xvalue[i],yvalue[i],function[i]);
            fprintf(fp," %d.  %.4f  %.4f  %.4f ",i,xvalue[i],yvalue[i],function[i]);
            count=count+1;
            printf("\n");
            fprintf(fp,"\n");
        }
    yvalue[search]=yvalue[count]+(h/24)*((-9*function[count-3])+(37*function[count-2])-(59*function[count-1])+(55*function[count]));
    final=equation(search,yvalue[search]);
    yvalue[search]=yvalue[count]+(h/24)*((function[count-2])-(5*function[count-1])+(19*function[count])+(9*final));
    printf("\n\n");
    fprintf(fp,"\n\n");
    printf("Approximate value is :  %.4f  ",yvalue[search]);
    fprintf(fp,"Approximate value is :  %.4f  ",yvalue[search]);
    fclose(fp);
    getch();
}