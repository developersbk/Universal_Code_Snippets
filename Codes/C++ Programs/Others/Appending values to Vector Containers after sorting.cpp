Appending values to Vector Containers after sorting
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

template <class T>
void print(T& c){
   for( typename T::iterator i = c.begin(); i != c.end(); i++ ){
      std::cout << *i << endl;
   }
}

int main( ){
   const char* names1[] = { "A", "B", "C" };
   const char* names2[] = { "D", "E", "F", "G" };

   vector<string> squad1( names1,names1 + sizeof( names1 ) / sizeof( names1[0] ) );
   vector<string> squad2( names2,names2 + sizeof( names2 ) / sizeof( names2[0] ) ); 

   sort( squad1.begin(), squad1.end() );
   
   print( squad1);
   sort( squad2.begin(), squad2.end() );
   print( squad2);

   squad1.insert( squad1.end(), squad2.begin(), squad2.end() );
   print( squad1); 

   sort( squad1.begin(), squad1.end() );
   print( squad1);
}
