/*Structure as Return type of a function*/
#include<stdio.h>
struct book
{
    int id;
    char name[40];
};
struct book getdata()
{
    struct book b;
    printf("Enter book name and id");
    scanf("%s%d",&b.name,&b.id);
    return b;
}
void display(struct book b)
{
    printf("\nDetails are:\n");
    printf("Book id = %d\n",b.id);
    printf("Book name= %s",b.name);
}
void main()
{
    struct book b;
    b=getdata();
    display(b);
}