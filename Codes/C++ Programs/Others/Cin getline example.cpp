Cin getline example

#include <iostream.h>

int main(void)
{
const SIZE = 100;
char msg[SIZE];
cout<<"Enter a string."<<endl;
cin.getline(msg,SIZE);
cout<<"The sentence you entered was"<<endl;
cout<<msg<<endl;

return 0;
}
