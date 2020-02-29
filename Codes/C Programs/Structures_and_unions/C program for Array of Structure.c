/*Array of Structure*/
#include<stdio.h>
struct book
{
    int id;
    char name[40];
};

void main()
{
    struct book b[10];
    int i,n;
    printf("Enter total number of book : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
        {
            printf("\nEnter book name and id of Book %d:\n",i+1);
            scanf("%s%d",&b[i].name,&b[i].id);
        }
    for(i=0; i<n; i++)
        {
            printf("\nBook %d:\n",i+1);
            printf("Book id = %d  ",b[i].id);
            printf("Book name= %s",b[i].name);
        }
}