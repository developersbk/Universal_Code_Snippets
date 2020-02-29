A shared resource example.
#include <iostream>
#include <cstring>
using namespace std;

class output {
  static char sharedResource[255]; // this is the shared resource
  static int inuse;        // buffer available if 0; in use otherwise
  static int oindex;       // index of sharedResource
  char str[80];
  int i;                   // index of next char in str
  int who;                 // identifies the object, must be > 0
public:
  output(int w, char *s) { 
     strcpy(str, s); 
     i = 0; 
     who = w; 
  }

  int putbuf() 
  {
    if(!str[ i ]) {         // done outputting
      inuse = 0;            // release buffer
      return 0;             // signal termination
    }
    if(!inuse)              // get buffer
        inuse = who; 
    if(inuse != who)        // in use by someone else
        return -1; 
    if(str[ i ]) {          // still chars to output
      sharedResource[oindex] = str[ i ];
      i++; oindex++;
      sharedResource[oindex] = '\0';// always keep null-terminated
      return 1;
    }
    return 0;
  }
  void show() { 
     cout << sharedResource << '\n'; 
  }
};

char output::sharedResource[255];   // this is the shared resource
int output::inuse = 0;      // buffer available if 0; in use otherwise
int output::oindex = 0;     // index of sharedResource

int main()
{
  output object1(1, "This is a test"), object2(2, " of statics");

  while(object1.putbuf() | object2.putbuf()) ; // output chars

  object1.show();

  return 0;
}
