#include <iostream>
#include <vector>
using namespace std;

class Solution
{
  vector<int> primeList;
public:
  int64_t sol(int n);
};

int64_t Solution::sol(int n)
{
  primeList.resize(n, 0);
  
  int x = 1;
  int64_t sum = 0;
  while(x < n)
  {
    x++;
    
    for(auto& pr : primeList)
    {  
      if(!pr) // x is prime
      {
        pr = x;
        sum += x;
        break;
      }

      if(x % pr == 0) // x is not prime
        break;
    }
  }
  return sum;
}

int main()
{
  Solution s;
  cout << s.sol(2000000) << endl;

  return 0;
}
