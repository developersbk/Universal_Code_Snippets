// Step 1: Create the stack class.

// Step 2: Declare the constructor and destructor in the class

// Step 3: Stack constructor definition.

// Step 4: Stack destructor definition.

// Step 5: Create the objects for the class stack. Objects automatically call the constructor for object initialization.

// Step 6: Before program termination destructors are automatically called by compiler. It destroys the objects in memory.


#include<iostream.h>
#define SIZE 100
class stack
{
    int stck[SIZE];
    int tos;
public:
    stack(); //constructor
    ~stack();  //destructor
    void push(int i);
    int pop();
};

//stack’s constructor function
stack :: stack()
{
    tos=0;
    cout<<”Stack Initialized\n”;
}

//stacks destructor function
stack :: ~stack()
{
    cout<<”\Stack Destroyed”;
}

void stack :: push(int i)
{
    if(tos==SIZE)
        {
            cout<<”Stack is full.\n”;
            return;
        }
    stck[tos] = i;
    tos++;
}


int stack :: pop ()
{
    if(tos==0)
        {
            cout<<”Stack underflow.\n”;
            return;
        }
    tos--;
    return stck[tos];
}

int main()
{
    stack a,b;
    a.	push(1);
    b.	push(2);
    a.	push(3);
    b.	push(4);
    cout<<a.pop()<< “  “;
    cout<<a.pop()<< “  “;
    cout<<b.pop()<< ”  “;
    cout<<b.pop()<<”\n”;
    return 0;
}


