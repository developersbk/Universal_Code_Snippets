// Create the base class and declare the data member under protected access specifier and declare the function.
// Create the derived class and access the base class data members in the derived class.
// Create the object for derived class.
// Call the public member function of the derived class.
// Compile and run the program.


#include<iostream.h>

class base

{

protected:

    int i, j; //private to base but accessible to derived

public:

    void setij(int a, int b)

    {
        i = a;
        j = b;
    }

    void showij()

    {
        cout<<i<<” “<<j<<”\n”;
    }

};



// Inherit base as protected

class derived : protected base

{

    int k;

public:

// derived may access base ‘s I and j and setij()

    void setk()

    {
        setij(10, 12);
        k = i*j;
    }

    void showall()

    {
        cout<<k<<” “;
        showij();
    }

};

int main()

{
    derived ob;
    ob.setk(); //public member of derived
    ob.showall(); //public member of derived
    return 0;
}


