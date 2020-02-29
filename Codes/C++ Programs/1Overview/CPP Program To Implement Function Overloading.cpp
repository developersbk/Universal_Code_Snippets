// Start the program
// Create the function with same name
// The function will be differed in return type and number of arguments
// Implement the function, which has the same name
// Compile and execute the program

#include <iostream.h>

#include<conio.h>

int abs(int n);

double abs(double n);

int main()

{
    clrscr();
    cout << "Absolute value of -10: " << abs(-10) << endl;
    cout << "Absolute value of -10.01: " << abs(-10.01) << endl;
    getch();
    return 0;
}

int abs(int n)

{
    cout << "In integer abs()\n";
    return n<0 ? -n : n;
}

double abs(double n)

{
    cout << "In double abs()\n";
    return n<0 ? -n : n;
}


