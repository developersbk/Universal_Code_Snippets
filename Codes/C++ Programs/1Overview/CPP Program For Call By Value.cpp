#include <iostream>

void doubleIt(int);

int main ()

{
    int num;
    cout << "Enter number: ";
    cin >> num;
    doubleIt(num);
    cout << "The number doubled in main is " << num << endl;
    return 0;
}

void doubleIt (int x)

{
    cout << "The number to be doubled is " << x << endl;
    x *= 2;
    cout << "The number doubled in doubleIt is " << x << endl;
}

