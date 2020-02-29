A function object that computes an integer sum.
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

class sum : unary_function<int, void> {
public:
  argument_type sum;

  sum() { sum = 0; }

  result_type operator()(argument_type i) {
  sum += i;
  }
};

int main()
{
  vector<int> v;

  for(int i=1; i < 11; i++) v.push_back(i);

  for(unsigned i=0; i < v.size(); ++i){
    cout << v[i] << endl;
  }
  sum s;

  s = for_each(v.begin(), v.end(), sum());
  cout << "sum of v: " << s.sum << endl;

  return 0;
}
