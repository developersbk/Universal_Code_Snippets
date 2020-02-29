/*This C Program Implements two Stacks using a Single Array & Check for Overflow & Underflow. A Stack is a linear data structure in which a data item is inserted and deleted at one record. A stack is called a Last In First Out (LIFO) structure. Because the data item inserted last is the data item deleted first from the stack.
To implement two stacks in one array, there can be two methods.

First is to divide the array in to two equal parts and then give one half two each stack. But this method wastes space.

So a better way is to let the two stacks to push elements by comparing tops of each other, and not up to one half of the array.

Push and Pop functions of both stack in the following code has their Time Complexity as O(1). They take constant time.

Print is O(n), where n is the number of elements in the stack.

The program has an array of size 10. 6 values are pushed in stack 1 and 4 in two. All conditions are being checked.*/


//This is a C Program to Implement two Stacks using a Single Array & Check for Overflow & Underflow
#include <stdio.h>
#define SIZE 10


int ar[SIZE];
int top1 = -1;
int top2 = SIZE;

//Functions to push data
void push_stack1 (int data)
{
    if (top1 < top2 - 1)
        {
            ar[++top1] = data;
        }
    else
        {
            printf ("Stack Full! Cannot Push\n");
        }
}
void push_stack2 (int data)
{
    if (top1 < top2 - 1)
        {
            ar[--top2] = data;
        }
    else
        {
            printf ("Stack Full! Cannot Push\n");
        }
}

//Functions to pop data
void pop_stack1 ()
{
    if (top1 >= 0)
        {
            int popped_value = ar[top1--];
            printf ("%d is being popped from Stack 1\n", popped_value);
        }
    else
        {
            printf ("Stack Empty! Cannot Pop\n");
        }
}
void pop_stack2 ()
{
    if (top2 < SIZE)
        {
            int popped_value = ar[top2++];
            printf ("%d is being popped from Stack 2\n", popped_value);
        }
    else
        {
            printf ("Stack Empty! Cannot Pop\n");
        }
}

//Functions to Print Stack 1 and Stack 2
void print_stack1 ()
{
    int i;
    for (i = top1; i >= 0; --i)
        {
            printf ("%d ", ar[i]);
        }
    printf ("\n");
}
void print_stack2 ()
{
    int i;
    for (i = top2; i < SIZE; ++i)
        {
            printf ("%d ", ar[i]);
        }
    printf ("\n");
}

int main()
{
    int ar[SIZE];
    int i;
    int num_of_ele;
    printf ("We can push a total of 10 values\n");
    //Number of elements pushed in stack 1 is 6
    //Number of elements pushed in stack 2 is 4
    for (i = 1; i <= 6; ++i)
        {
            push_stack1 (i);
            printf ("Value Pushed in Stack 1 is %d\n", i);
        }
    for (i = 1; i <= 4; ++i)
        {
            push_stack2 (i);
            printf ("Value Pushed in Stack 2 is %d\n", i);
        }
    //Print Both Stacks
    print_stack1 ();
    print_stack2 ();
    //Pushing on Stack Full
    printf ("Pushing Value in Stack 1 is %d\n", 11);
    push_stack1 (11);
    //Popping All Elements From Stack 1
    num_of_ele = top1 + 1;
    while (num_of_ele)
        {
            pop_stack1 ();
            --num_of_ele;
        }
    //Trying to Pop From Empty Stack
    pop_stack1 ();
    return 0;
}

/*

We can push a total of 10 values
Value Pushed in Stack 1 is 1
Value Pushed in Stack 1 is 2
Value Pushed in Stack 1 is 3
Value Pushed in Stack 1 is 4
Value Pushed in Stack 1 is 5
Value Pushed in Stack 1 is 6
Value Pushed in Stack 2 is 1
Value Pushed in Stack 2 is 2
Value Pushed in Stack 2 is 3
Value Pushed in Stack 2 is 4
6 5 4 3 2 1
4 3 2 1
Pushing Value in Stack 1 is 11
Stack Full! Cannot Push
6 is being popped from Stack 1
5 is being popped from Stack 1
4 is being popped from Stack 1
3 is being popped from Stack 1
2 is being popped from Stack 1
1 is being popped from Stack 1
Stack Empty! Cannot Pop