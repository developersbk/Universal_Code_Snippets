// Step 1: create the class loc.

// Step 2: Declare the constructor loc .which initialize the member variables.

// Step 3: Declare the delete and new operator functions with the keyword operator.

// Step 4: Define the user specified operator’s behavior in operator function definitions.

// Step 5: Create the objects for the class loc.

// Step 6: Use the user defined operators for objects.

// Step 7: Monitoring the output values.

#include <iostream.h>
#include <cstlib>
#include <new>

class loc
{
    int longtitude,latitude;
public :
    loc()
    {
        longtitude=latitude=0;
    }
    loc (int lg,int lt)
    {
        longtitude=lg;
        latitude=lt;
    }
    void show()
    {
        cout<< logitude << " ";
        cout<< latitude <<"\n";
    }

    void *operator new(size_t size);
    void operator delete(void *p);
    void *operator new[](size_t size);
    void operator delete[](void *p);
};

// new overloaded relative to loc

void *loc :: operator new(size_t size)
{
    void *p;
    cout<<"In overloaded new.\n";
    p=malloc(size);
    if(!p)
        {
            bad_alloc ba;
            throw ba;
        }
    return p;
}

void loc :: operator delete (void *p)
{
    cout<< "In overloaded delete. \n";
    free(p);
}

//new overloaded for loc arrays.
void *loc :: operator new[](size_t size)
{
    void *p;
    cout<<"Using overload new[].\n";
    p=malloc(size);
    if(!p)
        {
            bad_alloc ba;
            throw ba;
        }
    return p;
}

//delete overloaded for loc arrays.

void loc :: operator delete[](void *p)
{
    cout<<"Freeing array using overloaded delete[]\n";
    free(p);
}

int main()
{
    loc *p1,*p2;
    int i;
    try
        {
            p1=new loc(10,20); //allocate an object
        }
    catch (bad_alloc xa)
        {
            cout<<"Allocation error for p1.\n";
            return 1;
        }
    try
        {
            p2=new loc[10];
        }
    catch(bad_alloc xa)
        {
            cout<<"Allocation error for p2 .\n";
            return 1;
        }
    p1->show();
    for(i=0; i<10; i++)
        p2[i].show();
    delete p1;
    delete [] p2;
    return 0;
}

// SAMPLE INPUT AND OUTPUT:

// In overloaded new
// Using overload new[].

// 10 20
//  0 0
//  0 0
//  0 0
//  0 0
//  0 0
//  0 0
//  0 0
//  0 0
//  0 0
//  0 0
// In overloaded delete.
// Freeing array using overloaded delete.
