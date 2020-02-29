A generic mode finding function.
#include <iostream>
#include <cstring>
using namespace std;


template <class X> X mode(X *data, int size)
{
  register int t, w;
  X md, oldmd;
  int count, oldcount;

  oldmd = 0;
  oldcount = 0;
  for(t=0; t<size; t++) {
    md = data[t];
    count = 1;
    for(w = t+1; w < size; w++) 
      if(md==data[w]) count++;
    if(count > oldcount) {
      oldmd = md;
      oldcount = count;
    }
  }
  return oldmd;
}

int main()
{
  int i[] = { 1, 2, 3, 4, 2, 3, 2, 2, 1, 5};
  char *p = "this is a test";

  cout << "mode of i: " << mode(i, 10) << endl;
  cout << "mode of p: " << mode(p, (int) strlen(p));

  return 0;
}
