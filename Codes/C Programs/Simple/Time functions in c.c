    #include <stdio.h>  
    #include <time.h>  
    #include <conio.h>
    void main()
    {
    	time_t now;    
    	clrscr();
    	now = time((time_t *)NULL);  
     
    	printf("%s", ctime(&now));  
     
    	time(&now);
     
    	printf("%s", ctime(&now));  
    	{
    		struct tm *l_time;
     
    		l_time = localtime(&now);  
    		printf("%s", asctime(l_time));
    	}
     
    	time(&now);
    	printf("%s", asctime(localtime( &now  )));
    	{
    	
    		struct tm *l_time;
    		char string[20];
     
    		time(&now);
    		l_time = localtime(&now); 
    		strftime(string, sizeof string, "%d-%b-%y\n", l_time);
    		printf("%s", string);
    	}
     
     getch();
    }