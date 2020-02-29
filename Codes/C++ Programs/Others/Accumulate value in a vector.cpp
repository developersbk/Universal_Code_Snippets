Accumulate value in a vector
#include <numeric>
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

double arithmeticMean(const vector<int>& nums)
{
  double sum = accumulate(nums.begin(), nums.end(), 0);
  return (sum / nums.size());
}

int product(int num1, int num2)
{
  return (num1 * num2);
}

int main(int argc, char** argv)
{
  vector<int> myVector;

  myVector.push_back(1);
  myVector.push_back(2);
  myVector.push_back(3);
  myVector.push_back(4);

  cout << "The arithmetic mean is " << arithmeticMean(myVector) << endl;

  return (0);
}
