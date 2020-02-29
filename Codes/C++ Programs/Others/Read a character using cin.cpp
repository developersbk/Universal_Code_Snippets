Read a character using cin

#include <iostream.h>
#include <stdlib.h>

int main()
{
char mychar[100];
int i = 0;
//while the character is not a new line
while((mychar[i] = cin.get()) != '\n')
i++;

mychar[i] = NULL;
//display characters
cout<<mychar<<endl;

return 0;
}
