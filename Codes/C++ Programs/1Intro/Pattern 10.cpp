//Floyds Triangle

#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();  //clears the previous screen
//Printing pattern
    int rows,i,j,space;
    cout<<"Enter number of rows: ";
    cin>>rows;
    for(i=rows; i>=1; --i)
        {
            for(space=0; space<rows-i; ++space)
                cout<<"  ";
            for(j=i; j<=2*i-1; ++j)
                cout<<"* ";
            for(j=0; j<i-1; ++j)
                cout<<"* ";
            cout<<endl;
        }
    getch();  // wait for input
}

/*
     *********
      *******
       *****
        ***
         *
*/