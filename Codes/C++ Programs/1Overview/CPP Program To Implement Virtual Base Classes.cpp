// Start the program
// Create the class and declare the data members and data member functions
// We can create the virtual function also in the class
// Create the object for the class using array
// Call the function using the array object
// Compile and run the program

#include <iostream.h>

template <class T>

class MyClass
{

    T value1, value2;

public:

    MyClass (T first, T second)
    {
        value1=first;
        value2=second;
    }

    T getmax ()

    {
        T retval;
        retval = value1>value2 ? value1 : value2;
        return retval;
    }

};

int main ()

{
    MyClass <int> myobject (10, 5);
    cout << myobject.getmax();
    return 0;
}


