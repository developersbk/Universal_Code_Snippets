Fahrenheit to celsius conversion

#include <iostream.h> 
int main()
{
double fahr , celsius;
cout<<"Enter the temperature in degrees fahrenheit: ";
cin>>fahr;
//convert to celsius
celsius = (5.0 / 9.0) * (fahr - 32.0);
cout<<"The temperature in celsius is "<<celsius<<endl;

return 0;
}
