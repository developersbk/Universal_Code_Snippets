/*Structure as argument*/
/*Write a program to read information of a book and display the information.*/
#include<stdio.h>
#include<string.h>
struct book
{
    int bno;
    char name[40];
};
void display(struct book);
void main()
{
    struct book b;
    printf("\nEnter book no: ");
    scanf("%d",&b.bno);
    printf("Enter book name: ");
    scanf("%s",b.name);
    display(b);
}
void display(struct book b)
{
    printf("\n details are: ");
    printf("Book number=%d",b.bno);
    printf("Book name=%s",b.name);
}