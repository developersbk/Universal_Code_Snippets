    #include <stdio.h>
    #include <conio.h>
    void main()
    {
    	char *s;
    	int len,i;
    	clrscr();
    	printf("\nENTER A STRING: ");
    	gets(s);
    	len=strlen(s);
    	printf("\nTHE REVERSE OF THE STRING IS:");
    	for(i=len;i>=0;i--)
    		printf("%c",*(s+i));
    	getch();
    }