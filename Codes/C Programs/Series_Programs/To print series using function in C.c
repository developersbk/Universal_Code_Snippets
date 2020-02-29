    #include <stdio.h>
    #include <conio.h>
    void main()
    {
    	int num=9,i;
    	clrscr();
    	printf("%d ",num);
    	for(i=4;i<=10;i++)
    	{
    		num=num+pow(2,i);
    		printf("%d ",num);
    	}
    	getch();
    }
    pow(int a,int b)
    {
    	int prod=1,j;
    	for(j=1;j<=b;j++)
    		prod=prod*a;
    	return(prod);
    }


