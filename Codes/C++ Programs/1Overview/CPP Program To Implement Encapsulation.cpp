// Start the program
// Create the class and declare the data members
// Pass the value for the variables through the function
// Create the object for the class and call the function with arguments
// Compile and execute the program

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


