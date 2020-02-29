    #include <stdio.h>
    #include <conio.h>
    void main()
    {
    	char *s;
    	int len,i,j,sp=0,start,end;
    	clrscr();
    	printf("\nENTER A STRING: ");
    	gets(s);
    printf("\nTHE STRING AFTER CHANGING THE ORDER OF EACH WORD:\n");
    	len=strlen(s);
    	end=len-1;
    	for(i=len-1;i>=0;i--)
    	{
    		if(s[i]==32 || i==0)
    		{
    			if(i==0)
    				start=0;
    			else
    				start=i+1;
    			for(j=start;j<=end;j++)
    				printf("%c",s[j]);
    			end=i-1;
    			printf(" ");
    		}
    	}
    	getch();
    }