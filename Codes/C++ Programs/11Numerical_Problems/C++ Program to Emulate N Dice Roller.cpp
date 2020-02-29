#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char **argv)
{
    cout << "Enter the number of dice: ";
    int n;
    cin >> n;
    cout << "The values on dice are: ( ";
    for (int i = 0; i < n; i++)
        cout << (rand() % 6) + 1<<" ";
    cout<<")";
}

/*
Enter the number of dice: 5
The values on dice are: ( 6 6 5 5 6 )

Enter the number of dice: 1
The values on dice are: ( 6 )

Enter the number of dice: 3
The values on dice are: ( 6 6 5 )