#include <iostream>
using namespace std;

class Solution
{
public:
  int sol(int x);
};

int Solution::sol(int x)
{
  int a = 1, b = 2;
  int c = a + b;
  int sum = b;

  while(b + c < x)
  {
    a = b;
    b = c;
    c = a + b;
    if( c % 2 == 0)
      sum += c;
  }

  return sum;
}

int main()
{
  Solution s;
  cout << s.sol(4e6) << endl;

  return 0;
}
