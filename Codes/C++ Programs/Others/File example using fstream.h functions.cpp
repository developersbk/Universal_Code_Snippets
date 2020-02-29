File example using fstream.h functions

#include<iostream.h>
#include<fstream.h> 
int main()

{
// first lets output to a file
ofstream fout("sample.txt");
fout << "WWW" << endl;
fout.close();
char str[20];
//read in the file
ifstream fin("sample.txt");
fin >> str;
fin.close();
//display sample.txt contents
cout << "data read from file: " << str << endl;
return 0;
}
