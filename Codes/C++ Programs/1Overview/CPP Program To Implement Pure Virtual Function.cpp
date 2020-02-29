// Step 1: create a base class namely number and declare the pure virtual function  show().

// Step 2: create the derived classes hextype, dectype & acttype from the class number

// Step 3: create the objects for the class dectype, hextype and octtype.

// Step 4: call the member function show();

// Step 5: Corresponding called function change the integer type as hex ,oct and decimal .

// Step 6: Display the values.

#include<iostream.h>
class number
{
protected:
    int val;
public :
    void setval(int i)
    {
        val= i;
    }
    //show() is  a pure virtual function
    virtual void show() = 0;
};

class hextype : public number
{
public :
    void show ()
    {
        cout<<hex<<val<<”\n”;
    }
};

class dectype : public number
{
public :
    void show()
    {
        cout<<val<<”\n”;
    }
};


class octtype : public number
{
public :
    void show()
    {
        cout<<oct<<val<<”\n”;
    }
};

void main()
{
    dectype d;
    hextype h;
    octtype o;
    d.setval(20);
    d.show(); //display 20 –decimal
    h.setval(20);
    h.show(); //display 14-hexadecimal
    o.setval(20);
    o.show(); //display 24-octal
}

