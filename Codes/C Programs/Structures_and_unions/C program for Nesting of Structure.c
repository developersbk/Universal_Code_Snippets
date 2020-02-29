#include<stdio.h>
struct detail
{
    char name[10];
    float price;
};
struct item
{
    int id;
    struct detail d;
};
void main()
{
    struct item itm;
    printf("Enter item name, id and price ");
    scanf("%s%d%f",itm.d.name,&itm.id,&itm.d.price);
    printf("Entered details are:\n");
    printf("Id: %d\nName: %s  Price: %f", itm.id, itm.d.name, itm.d.price);
}