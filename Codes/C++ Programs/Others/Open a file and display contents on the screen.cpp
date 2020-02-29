Open a file and display contents on the screen

//this example opens a file called myfile.txt
//and reads the text message to it
#include <fstream.h> 
int main()
{
ifstream MyFile("myfile.txt");
char ch;

while(!MyFile.eof())
{
MyFile.get (ch);
cout<<ch;
}
MyFile.close();
return 0;
}
