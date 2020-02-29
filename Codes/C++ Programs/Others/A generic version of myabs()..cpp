A generic version of myabs().
#include <iostream>
using namespace std;

template <class X> X myabs(X val)
{
  return val < 0 ? -val : val;
}

int main()
{
  cout << myabs(-10) << '\n';    // integer abs

  cout << myabs(-10.0) << '\n';  // double abs

  cout << myabs(-10L) << '\n';   // long abs

  cout << myabs(-10.0F) << '\n'; // float abs

  return 0;
}
