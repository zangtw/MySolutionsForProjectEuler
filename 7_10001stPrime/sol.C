#include <iostream>
#include <vector>
using namespace std;

class Solution
{
  vector<int> primeList;
public:
  int sol(int n);
};

int Solution::sol(int n)
{
  primeList.resize(n, 0);

  int x = 1;
  while(n)
  {
    x++;
    
    for(auto& pr : primeList)
    {  
      if(!pr) // x is prime
      {
        pr = x;
        n--;
        break;
      }

      if(x % pr == 0) // x is not prime
        break;
    }
  }
  return primeList.back();
}

int main()
{
  Solution s;
  cout << s.sol(10001) << endl;

  return 0;
}
