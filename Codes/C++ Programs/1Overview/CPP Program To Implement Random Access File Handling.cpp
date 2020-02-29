// Start the program
// Create the base class and declare the data member under protected access specifier and declare the function
// Create the derived class and access the base class data members in the derived class
// Create the object for derived class
// Call the public member function of the derived class
// Compile and run the program

#include<iostream.h>

#include<fstream.h>

#include<conio.h>

void main(int argc,char *argv[])

{
    char ch;
    clrscr();
    if(argc!=3)
        {
            cout<<"Usage Starting Location\n";
        }
    ifstream in(argv[1],ios::in | ios::binary);
    if(!in)
        {
            cout<<"Cannot open a file";
        }
    in.seekg(0,ios::beg);
    while(in.get(ch))
        cout<<ch;
    getch();
}


