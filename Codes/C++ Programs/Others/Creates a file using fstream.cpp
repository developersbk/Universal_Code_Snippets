Creates a file using fstream

//this example creates a file called myfile.txt
//and adds some text message to it
#include <fstream.h> 
int main()
{
ofstream MyFile("myfile.txt");
MyFile<<"This is some test message";
MyFile.close();

return 0;
}
