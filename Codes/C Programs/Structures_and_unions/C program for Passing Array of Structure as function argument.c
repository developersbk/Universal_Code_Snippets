/*Passing Array of Structure as function argument*/
#include<stdio.h>
struct student
{
    char name[40];
    int marks;
};
void display(struct student[],int);
void main()
{
    struct student s[3];
    int i;
    printf("enter information of 3 students\n");
    for(i=0; i<3; i++)
        {
            printf("\nEnter name");
            scanf("%30[^\n]%*c",s[i].name);//you can use gets()
            printf("\nEnter marks");
            scanf("%d",&s[i].marks);
        }
    display(s,3);
}
void display (struct student s[], int n)
{
    int i,count=0;
    for(i=0; i<n; i++)
        {
            if(s[i].marks>=100)
                {
                    printf("Required details are\n");
                    printf("student name= %s",s[i].name);
                    printf(" student marks=%d\n",s[i].marks);
                    count++;
                }
        }
    if(count==0)
        {
            printf("No details available for marks>100");
        }
}