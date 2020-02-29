// Step 1: create the class loc.

// Step 2: Declare the constructor loc .which initialize the member variables.

// Step 3: Declare the member operator functions with the keyword operator.

// Step 4: Define the user specified operator’s behavior in operator function definitions.

// Step 5: Create the objects for the class loc.

// Step 6: Use the user defined operators for objects.

// Step 7: Monitoring the output values.

#include<iostream.h>
class loc
{
    int longtitude,latitude;
public:
    loc();
    loc(int lg,int lt)
    {
        longtitude = lg;
        latitude=lt;
    }

    void show()
    {
        cout<<longitude<<" ";
        cout<<latitude<<"\n";
    }
    loc operator+(loc op2);
    loc operator-(loc op2);
    loc opeartor=(loc op2);
    loc opeartor++();
};

loc loc :: opeartor+(loc op2)
{
    loc temp;
    temp.longtude = op2.longtide + longitude;
    temp.latitude = op2.latitude + latitude;
    return temp;
}

loc loc :: operator-(loc op2)
{
    loc temp;
    temp.longtitude = longitude- op2.longitude;
    temp.latitude= latitude-op2.latitude;
    return temp;
}

loc loc ::operator=(loc op2)
{
    longtitude = op2.longitude;
    latitude =op2.latitude;
    return *this;
}

loc loc :: operator++()
{
    longitude++;
    latitude++;
    return this;
}

int main()
{
    loc ob1(10,20),ob2(5,30),ob3(90,90);
    ob1.show();
    ob2.show();
    ++ob1;
    ob1.show();
    ob2=++ob1;
    ob1.show();
    ob2.show();
    ob1=ob2=ob3;
    ob1.show();
    ob2.show();
    return;
}

