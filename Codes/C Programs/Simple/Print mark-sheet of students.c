    #include<iostream.h>
    #include<conio.h>
    #include<stdio.h>
    #include<string.h>
    void main() {
    	/*variable declaration part */
    	int rl,s1,s2,s3,t;
    	float per;
    	char nm[25],div[10];
    	clrscr();
    	/*reading part */
    	printf("Enter the Roll No : ");
    	scanf("%d",&rl);
    	printf("Enter Name        : ");
    	fflush(stdin);
    	gets(nm);
    	printf("Enter Three Subject Marks :\n");
    	scanf("%d%d%d",&s1,&s2,&s3);
    	/* processing part */
    	t=s1+s2+s3;
    	per=t/3.0;
    	if(per>=75)
    	     strcpy(div,"Honour"); else if( per>=60)
    		  strcpy(div,"First"); else if( per>=48)
    			 strcpy(div,"Second"); else if (per>=36)
    			     strcpy(div,"Pass"); else
    			     strcpy(div,"Fail");
    	/* display part */
    	printf("\t\tUniversity of Rajasthan\n");
    	printf("\n\n");
    	printf("Roll No: %d \t  Name : %s\n",rl,nm);
    	printf("---------------------------------------------------\n");
    	printf("Subject             Max      Min            Obt.Marks\n");
    	printf("---------------------------------------------------\n");
    	printf("Hist                100      36              %d\n",s1);
    	printf("socio.              100      36              %d\n",s2);
    	printf("Hindi               100      36              %d\n",s3);
    	printf("---------------------------------------------------\n");
    	printf("				  Total          %d\n",t);
    	printf("per  %f\t\t\t  div: %s \n",per,div);
    	printf("---------------------------------------------------\n");
    	getch();
    }