#include<stdio.h>
#include<conio.h>
void main()
{
    void table();
    table();
    getch();
}
void table()
{
    int n,i,r;
    printf("enter a no to know table: ");
    scanf("%d",&n);
    for(i=1; i<=10; i++)
        {
            r=n*i;
            printf("%d*%d=%d\n",n,i,r);
        }
}
Output:
enter a no to know table: 2
2*1=2
    2*2=4
        2*3=6
            2*4=8
                2*5=10
                    2*6=12
                        2*7=14
                            2*8=16
                                2*9=18
                                    2*10=20