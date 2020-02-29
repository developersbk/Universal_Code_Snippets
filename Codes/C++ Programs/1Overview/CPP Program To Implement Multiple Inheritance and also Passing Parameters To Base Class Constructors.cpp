// step 1:  Declare the base class namely BaseClass1. It consists the private member data and a constructor.

// Step 2:  Declare the base class namely BaseClass2. It consists the private member data and a constructor.

// Step 3:  create the derived class namely DerivedClass from BassClass1 and BaseClass2.

// Step 4:  Declare constructor in DerivedClass with three arguments and also base  the arguments to base class constructor.

// Step 5:  Create the object for DervidClass in main ().

// Step 6:  The object automatically call the Derived class constructor. Now Derived class constructor automatically call the baseclass1 & baseclass2 constructor with arguments.

// Step 7:  Display the values.

#include <iostream>
using namespace std;

class BaseClass1
{
    int a;
public:
    BaseClass1(int x)
    {
        a = x;
    }
    int geta()
    {
        return a;
    }
};


class BaseClass2
{
    int b;
public:
    BaseClass2(int x)
    {
        b = x;
    }
    int getb()
    {
        return b;
    }
};


class DerivedClass : public BaseClass1, public BaseClass2
{
    int c;
public:
    DerivedClass(int x, int y, int z) : BaseClass1(z), BaseClass2(y)
    {
        c = x;
    }

    void show()
    {
        cout << geta() << ' ' << getb() << ' ';
        cout << c << '\n';
    }
};

int main()
{
    DerivedClass object(1, 2, 3);
    object.show();
    return 0;
}


