    #include <stdio.h>
    #include <conio.h>
    void main()
    {
    	int n,*p,i,h=0;
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
    	h=*p;
    	for(i=1;i<n;i++)
    	{
    		if(*(p+i)>h)
    			h=*(p+i);
    	}
    	printf("\nTHE HIGHEST NUMBER IS %d",h);
    	getch();
    }