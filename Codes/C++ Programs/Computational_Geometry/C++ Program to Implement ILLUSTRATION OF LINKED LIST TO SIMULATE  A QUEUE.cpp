

/*------------ ILLUSTRATION OF LINKED LIST TO SIMULATE  A QUEUE --------*/

/*	THIS PROGRAM ILLUSTRATES THE USE OF LINKED LISTS TO IMPLEMENT
	THE DATA STRUCTURES LIKE QUEUES. THE PROGRAM ACCEPTS THE WORDS
	AND STORES THEM AT DIFFERENT NODES OF THE LINKED LIST. IT THEN
	PRINTS THOSE WORDS ON FIFO BASIS.

	INPUTS :  WORDS TO THE LINKED LIST.

	OUTPUTS : DISPLAY OF WORDS ON FIFO BASIS

/*------------------------------    PROGRAM  ----------------------------*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

#define NULL 0   /* NULL pointer for last node in the list */

struct list_element
{
    /* This structure contains data item and pointer to the next node */
    char item[40];                     /* This is data item */
    struct list_element *next;         /* This is pointer   */
};
typedef struct list_element node;
/* define the structure 'list_element' of type node */

void main()
{
    node *start;   /* declaration of the pointer to the nodes */
    void create (node *pt);   /* function declaration */
    void display (node *pt);  /* function declaration */
    clrscr();
    printf("\n          Computational Techniques - J. S. CHITODE");
    printf("\n      ILLUSTRATION OF LINKED LIST TO SIMULATE  A QUEUE\n");
    start = (node *)malloc(sizeof(node));
    /*allocate the memory for starting node; start is memory address */
    create(start);         /* create starting node */
    printf("\nThe contents of the link list are ...\n");
    display (start);       /* display the contents of nodes */
}
/*-----------------------------------------------------------------------*/

void create(node * record)   /* This function creates nodes in the
				link list till 'end' is entered    */
{
    printf("\ndata item = ");
    scanf("%s",record->item);         /* get the value of data item */
    if(strcmpi(record->item, "end") == 0) record->next = NULL;
    /* check whether 'end is entered */
    else
        {
            record->next = (node *)malloc(sizeof(node));
            create(record->next);
        }  /* create new node by calling this function recursively */
    return;
}
/*-----------------------------------------------------------------------*/

void display (node *record)  /* This function is used to display the
				contents of linked list            */
{
    if(record->next != NULL)
        {
            printf("\n%s",record->item);
            display(record->next);
        }    /* This function is called recursively to display all the items */
    return;
}
/*------------------------ END OF PROGRAM ------------------------------*/
