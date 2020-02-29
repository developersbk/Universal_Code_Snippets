// Start the program
// Create the class and declare the data members and member functions
// Declare the pointer and store the address of data in the pointer
// Create the object and call the function in the main program
// Compile and execute the program

#include<iostream.h>

class c1

{

public:

    int i;

    c1(int j)

    {
        i = j;
    }

};

int main()

{
    c1 ob(1);
    int *p;
    p = &ob.i; //get address of ob.i
    cout<<*p; // access ob.i via p
    return 0;
}

