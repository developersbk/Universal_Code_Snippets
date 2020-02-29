// Start the program
// Create the class
// Write the function to implement unary +, - and =
// Write the function to implement binary +
// Create the instance and pass the value for the function
// Call the overloaded function and equate it to another object
// Compile and run the program

#include<iostream.h>

class myclass

{

    int a, b;

public:

    void init(int i, int j);

    {
        a = i;
        b = j;
    }

    void show();

    {
        cout<<”a=”<<a<<”\n”;
        cout<<”b=”<<b<<”\n”;
    }

};

int main()

{
    myclass x;
    x.init(10, 20);
    x.show();
    return 0;
}


