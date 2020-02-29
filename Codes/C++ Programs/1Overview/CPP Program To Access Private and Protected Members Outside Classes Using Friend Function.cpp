// Step 1: create the class with private and protected numbers

//   Step 2: Declare the function with keyword friend. This type function has the argument as function declared class type.

//   Step 3: Define the friend function outside the class.

//   Step 4: Use private and protected members in that friend function.

//   Step 5: Call the friend function from main.

#include <iosteram.h>
#include<conio.h>
class exforsys
{
private:
    int a,b;
public:
    void test()
    {
        a=100;
        b=200;
    }
    friend int compute(exforsys e1)



//Friend Function Declaration with keyword friend and with the object of class exforsys to which it is friend passed to it
};


int compute(exforsys e1)
{
//Friend Function Definition which has access to private data
    return int(e1.a+e1.b-5);
}

main()
{
    exforsys e;
    e.test();
//Calling of Friend Function with object as argument.
    cout<<"The result is:"<<compute(e);
}



