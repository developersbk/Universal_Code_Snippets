Assign Items in int array to vector
#include <iostream>
#include <vector>
#include <cassert>
#include <numeric>  // for accumulate
using namespace std;

int main()
{
  int x[5] = {2, 3, 5, 7, 11};

  vector<int> vector1(&x[0], &x[5]);

  int sum = accumulate(vector1.begin(), vector1.end(), 0);

  cout << sum << endl;
  return 0;
}

/* 
28

 */
