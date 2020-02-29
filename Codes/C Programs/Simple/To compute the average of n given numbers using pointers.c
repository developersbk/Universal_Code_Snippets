    #include <stdio.h>
    #include <conio.h>
    void main()
    {
    	int n,*p,sum=0,i;
    	float avg;
    	clrscr();
    	printf("\nHOW MANY NUMBERS: ");
    	scanf("%d",&n);
    	p=(int *) malloc(n*2);
    	if(p==NULL)
    	{
    		printf("\nMEMORY ALLOCATION UNSUCCCESSFUL");
    		exit();
    	}
    	for(i=0;i<n;i++)
    	{
    		printf("\nENTER NUMBER %d: ",i+1);
    		scanf("%d",(p+i));
    	}
    	for(i=0;i<n;i++)
    		sum=sum+*(p+i);
    	avg=(float)sum/n;
    	printf("\nTHE AVERAGE OF THE NUMBERS IS %0.2f",avg);
    	getch();
    }