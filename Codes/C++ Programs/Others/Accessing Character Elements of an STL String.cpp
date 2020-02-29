Accessing Character Elements of an STL String
#include <string>
#include <iostream>

int main(){
   using namespace std;

   string str ("Hello String");

   for(size_t i = 0; i < str.length(); ++ i){
       cout << "Character [" << i << "] is: ";
       cout << str [i] << endl;
   }
   cout << endl;

   return 0;
}
