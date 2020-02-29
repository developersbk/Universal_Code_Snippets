Launch notepad using C++

#include <iostream.h>
#include <windows.h> 
int main(void)
{

cout<<"Explorer will launch.\n"<<endl;
/*replace with the path to your explorer.exe*/
system("h:\\windows\\explorer.exe");

return 0;
}
