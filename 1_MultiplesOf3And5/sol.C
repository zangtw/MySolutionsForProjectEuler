#include <iostream>
using namespace std;

class Solution
{
public:
  int sol(int a, int b, int x);
};

int getSum(int a, int x)
{
  int power = (x - 1) / a;
  return power * (power + 1) / 2 * a;
}

int Solution::sol(int a, int b, int x)
{
  int c = a * b;
  int s1 = getSum(a, x);
  int s2 = getSum(b, x);
  int s3 = getSum(c, x);
  return s1 + s2 - s3;
}

int main()
{
  Solution s;
  cout << getSum(3, 1000) << endl;
  cout << getSum(5, 1000) << endl;
  cout << getSum(15, 1000) << endl;
  cout << s.sol(3, 5, 1000) << endl;

  return 0;
}
