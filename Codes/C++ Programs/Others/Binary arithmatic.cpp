Binary arithmatic

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

void b_to_d(char result[]); //binary to decimal
void d_to_b(int dec,char binary[]); // decimal to binary

main()
{
	int ch,n1,n2,i=0,j,k,l,carry,r,x1,x2,x;
	char bn1[30],bn2[30],result[30],binary[30];
	char multi[30][30];
	clrscr();
	do
	{
		printf("<1> input first operand \n");
		printf("<2> input second operand \n");
		printf("<3> binary addition \n");
		printf("<4> binary subtraction \n");
		printf("<5> binary multiplation \n");
		printf("<6> result to decimal \n");
		printf("<7> Exit \n\n");
		do
		{
			printf("enter your choice ");
			scanf("%d",&ch);
		}while(ch>7 || ch<1);
		switch (ch)
		{
			case 1:
				printf("\n input first operand ");
				scanf("%d",&n1);
				x1=n1;
				d_to_b(n1,binary);
				for(i=0;binary[i]!='\0';++i)
					bn1[i]=binary[i];
				bn1[i]='\0';
				break;
			case 2:
				printf("\n input second operand ");
				scanf("%d",&n2);
				x2=n2;
				d_to_b(n2,binary);
				for(i=0;binary[i]!='\0';++i)
					bn2[i]=binary[i];
				bn2[i]='\0';
				break;
			case 3:		//addition
				for(i=0;i<30;++i)      //reset result
					result[i]='\0';
				carry=0;
				if(strlen(bn1)<strlen(bn2))
					r=strlen(bn2);
				else
					r=strlen(bn1);
				for(i=0;i<r;++i)
				{
					result[i+1]='\0';
					if(carry==0)
					{
						if(bn1[i]-48+bn2[i]-48+carry==1)
							result[i]=bn1[i]-48+bn2[i]-48+48;
						else
							result[i]=0+48;
					}
					else
					{
						if(bn1[i]-48+bn2[i]-48+carry==2)
							result[i]=0+48;
						else
							result[i]=1+48;
					}
					if(bn1[i]-48+bn2[i]-48+carry>1)
						carry=1;
					else
						carry=0;
					if(carry==1)
						result[i+1]=carry+48;
				}
				printf("\n%s\n",strrev(result));
				break;
			case 4:		//subtraction
				for(i=0;i<30;++i)      //reset result
					result[i]='\0';
				carry=0;
				if(strlen(bn1)<strlen(bn2))
					r=strlen(bn2);
				else
					r=strlen(bn1);
				for(i=0;i<r;++i)
				{
					result[i+1]='\0';
					if(bn1[i]<bn2[i])
						carry=2,--bn1[i+1];
					else
						carry=0;
					if(carry+bn1[i]-48-bn2[i]+48==1)
						result[i]=1+48;
					else
						if(carry+bn1[i]-48-bn2[i]+48==0)
							result[i]=0+48;
				}
				printf("\n%s\n",strrev(result));
				break;
			case 5:		//binary multiplication complited on 27-03-2004
				for(i=0;i<30;++i)      //reset result
					result[i]='\0';
				strrev(bn2); // reversing second binary operand
				k=0,x=0;
				for(i=0;i<strlen(bn2);++i)  //creating array for addition
					if(bn2[i]=='1')
					{
						for(j=i+1;bn2[j]!='\0';++j)
							multi[k][x++]='0';
						for(l=0;bn1[l]!='\0';++j,++l)
							multi[k][x++]=bn1[l];
						for(;x<30;++j)
							multi[k][x++]='0';
					++k,x=0;
					}
				l=0;
				for(j=0;j<30;++j)  //addition of all columns without carry
				{
					x=0;
					for(i=0;i<k;++i)
						x+=(multi[i][j]-48);
					multi[0][l++]=x;
				}
				for(i=0;i<30;++i)   //loop for including carry.
					if(multi[0][i]>1)
						multi[0][i+1]+=((multi[0][i]-(multi[0][i]%2))/2);
				printf("\n");
				for(i=29;i>=0;--i)  // excluding first zero's (0's) of array
					if(multi[0][i]!=0)
						break;
				j=0;
				for(;i>=0;--i)   // final calculations and print
					if(multi[0][i]<48)
					{
						multi[0][i]%=2;
						result[j++]=multi[0][i]+48;
					       //	printf("%d",multi[0][i]);
					}
				printf("\n");
				printf("%s\n",result);
				break;
			case 6:		//result in decimal
				b_to_d(result);
				printf("\n");
				break;
		}
		n1=x1;
		d_to_b(n1,binary);
		for(i=0;binary[i]!='\0';++i)
			bn1[i]=binary[i];
		bn1[i]='\0';

		n2=x2;
		d_to_b(n2,binary);
		for(i=0;binary[i]!='\0';++i)
			bn2[i]=binary[i];
		bn2[i]='\0';

	}while(ch!=7);
	printf("\n\n i will wait for your mails");
	getch();
	return 0;
}

void b_to_d(char result[]) //binary to decimal
{
	short int i;
	long int dec=0;
	strrev(result);
	for(i=0;i<strlen(result);++i)
		dec+=(result[i]-48)*pow(2,i);
	printf("result in decimal is %ld\n",dec);
	strrev(result);
}

void d_to_b(int dec,char binary[]) // decimal to binary
{
	int i=0;
	while(dec>0)
	{
		binary[i++]=dec%2+48;
		binary[i]='\0';
		dec-=(dec%2);
		dec/=2;
	}
}
