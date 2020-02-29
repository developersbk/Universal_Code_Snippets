#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();  //clears the previous screen
//Printing pattern
    int i,j;
    char input,temp='A';
    cout<<"Enter uppercase character you want in triange at last row: ";
    cin>>input;
    for(i=1; i<=(input-'A'+1); ++i)
        {
            for(j=1; j<=i; ++j)
                cout<<temp<<" ";
            ++temp;
            cout<<endl;
        }
    getch();  // wait for input
}

/*
A
BB
CCC
DDDD
EEEEE
*/