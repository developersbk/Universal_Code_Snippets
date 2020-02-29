Another example of read() and write() and illustrates the use of gcount( )
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  double doubleNumberArray[4] = {99.75, -34.4, 1776.0, 200.1};
  int i;
  ofstream out("numbers", ios::out | ios::binary);
  if(!out) {
    cout << "Cannot open file.";
    return 1;
   }
  out.write((char *) &doubleNumberArray, sizeof doubleNumberArray);
  out.close();
  for(i=0; i<4; i++) // clear array
    doubleNumberArray[i] = 0.0;

  ifstream in("numbers", ios::in | ios::binary);
  in.read((char *) &doubleNumberArray, sizeof doubleNumberArray);
  
  cout << in.gcount() << " bytes read\n"; // see how many bytes have been read
  for(i=0; i<4; i++) // show values read from file
     cout << doubleNumberArray[i] << " ";
  in.close();
  return 0;
}
