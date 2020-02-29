/*
 * C Program to Count Number of Non Leaf Nodes of a given Tree
 */
#include <stdio.h>
#include <stdlib.h>

struct btnode
{
    int value;
    struct btnode *r,*l;
} *root = NULL, *temp = NULL;

void create();
void insert();
void add(struct btnode *t);
void inorder(struct btnode *t);

int count = 0;

void main()
{
    int ch;
    printf("\nOPERATIONS ---");
    printf("\n1] Insert ");
    printf("\n2] Display");
    printf("\n3] Exit ");
    while (1)
        {
            printf("\nEnter your choice : ");
            scanf("%d", &ch);
            switch (ch)
                {
                case 1:
                    insert();
                    break;
                case 2:
                    inorder(root);
                    printf("\nNumber of non leaf nodes: %d", count);
                    break;
                case 3:
                    exit(0);
                default :
                    printf("Wrong choice, Please enter correct choice  ");
                    break;
                }
        }
}

/* To create a new node with the data from the user */
void create()
{
    int data;
    printf("Enter the data of node : ");
    scanf("%d", &data);
    temp = (struct btnode* ) malloc(1*(sizeof(struct btnode)));
    temp->value = data;
    temp->l = temp->r = NULL;
}

/* To check for root node and then create it */
void insert()
{
    create();
    if (root == NULL)
        root = temp;
    else
        add(root);
}

/* Search for the appropriate position to insert the new node */
void add(struct btnode *t)
{
    if ((temp->value > t->value) && (t->r != NULL))        /* value more than root node value insert at right */
        add(t->r);
    else if ((temp->value > t->value) && (t->r == NULL))
        t->r = temp;
    else if ((temp->value < t->value) && (t->l != NULL))        /* value less than root node value insert at left */
        add(t->l);
    else if ((temp->value < t->value) && (t->l == NULL))
        t->l = temp;
}

/* To display and count the sum of non leaf nodes */
void inorder(struct btnode *t)
{
    if (t->l != NULL)
        inorder(t->l);
    if ((t->l != NULL) ||  (t->r != NULL))
        {
            count++;                            /* To count number of non leaf nodes */
            printf("%d ->",t->value);
        }
    if (t->r != NULL)
        inorder(t->r);
}

/*
 OPERATIONS ---
1] Insert
2] Display
3] Exit
Enter your choice : 1
Enter the data of node : 40

Enter your choice : 1
Enter the data of node : 20

Enter your choice : 1
Enter the data of node : 60

Enter your choice : 1
Enter the data of node : 10

Enter your choice : 1
Enter the data of node : 30

Enter your choice : 1
Enter the data of node : 80

Enter your choice : 1
Enter the data of node : 90

Enter your choice : 2
20->40->60->80->
Number of non leaf nodes: 4
Enter your choice : 3

                40
                /\
               /  \
             20    60
             / \    \
           10  30   80
                     \
                     90