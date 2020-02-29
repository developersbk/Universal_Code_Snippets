// Start the program
// Create the static class and declare the static data members in the class
// Declare the static member function
// Create the object for the static class
// Pass the static data value when we call the static member function in the main program
// Compile and execute the program


#include<iostream.h>

class static_type

{

    static int i;

public:

    static void init(int x)

    {
        i = x;
    }

    void show()

    {
        cout<<endl<<i;
    }

};

int static_type::i; // define i

int main()

{
// init static data before object creation
    static_type::init(100);
    static_type x;
    x.show(); // display 100
    static_type::init(1000);
    static_type y;
    x.show();
    y.show();
    return 0;
}


