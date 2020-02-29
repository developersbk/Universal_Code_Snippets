// Start the program
// Create the base class and declare the data member under protected access specifier and declare the function
// Create the derived class and access the base class data members in the derived class
// Create the object for derived class
// Call the public member function of the derived class
// Compile and run the program

#include<iostream.h>

#include<fstream.h>

int main()

{
    ifstream in(“INVENTRY”); //input
    if(!in)
        {
            cout<<”Cannot open INVENTRY file”;
            return 1;
        }
    char item[20];
    float cost;
    in>>item>>cost;
    cout<<item<<” ”<<cost<<”\n”;
    in>>item>>cost;
    cout<<item<<” “<<cost<<”\n”;
    in>>item>>cost;
    cout<<item<<” “<<cost<<”\n”;
    in.close();
    return 0;
}

