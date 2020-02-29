Structure

#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>

typedef struct
{
	char name[6];
	int roll;
}student;
void main()
{
	student *p;
	int n,i,temp;
	FILE *k;
	k=fopen("k.txt","w");
	printf("enter the numbe of students ");
	scanf("%d",&n);
	p=(student *)malloc(n*sizeof(student));
	for(i=0;i<n;++i)
	{
		printf("enter the name of student %d ",i+1);
		scanf("%s",(p+i)->name);
		printf("enter the roll number of student %d ",i+1);
		scanf("%d",&(p+i)->roll);
	}
	for(i=0;i<n;++i)
	{
		printf("\n name of student %d is %s",i+1,(p+i)->name);
		printf("\n roll number of student %d is %d",i+1,(p+i)->roll);
	}
	getch();
	fclose(k);
}
