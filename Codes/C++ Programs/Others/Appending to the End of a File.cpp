Appending to the End of a File
#include <iostream>

#include <fstream>
using namespace std;
int main(){
   char fileName[80];
   char buffer[255];
   cout << "Please re-enter the file name: ";
   cin >> fileName;

   ifstream fin(fileName);
   if (fin){
      char ch;
      while (fin.get(ch))
         cout << ch;
   }
   fin.close();

   cout << "in append mode...\n";

   ofstream fout(fileName,ios::app);
   if (!fout)
   {
      cout << "Unable to open for appending.\n";
      return(1);
   }

   cout << "\nEnter text for the file: ";
   cin.ignore(1,'\n');
   cin.getline(buffer,255);
   fout << buffer << "\n";
   fout.close();

   fin.open(fileName);
   if (!fin)
   {
      cout << "Unable to open for reading.\n";
      return(1);
   }
   char ch;
   while (fin.get(ch))
      cout << ch;
   fin.close();
   return 0;
}
