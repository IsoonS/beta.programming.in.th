#include <iostream>
#include <vector>
#include <set>
using namespace std;
// vector can be modified
void findPrimes(vector<int> &primes)
{
  primes.push_back(2);
  int count_num = 0;
  for (int i = 3; i <= 1000; i += 2)
  {
    count_num = 0;
    for (int j = 2; j * j <= i; j++)
    {
      if (i % j == 0)
      {
        count_num++;
      }
      if (count_num == 1)
        break;
    }
    if (count_num == 0)
    {
      primes.push_back(i);
    }
  }
}

int main()
{
  int n, k;
  int n_strike_out = 0;
  int j_prime = 0;
  set<int> striked_out;
  cin >> n >> k;
  vector<int> primes;
  findPrimes(primes);
  // for (int i = 0; i < primes.size(); i++) {
  //   cout << primes[i] << " ";
  // }

  for (int i = 0; i < primes.size(); i++)
  {
    for (int j = primes[i]; j <= n; j += primes[i])
    {
      // if not found in set -> add to set and then check condition
      if (striked_out.find(j) == striked_out.end())
      {
        striked_out.insert(j);
        n_strike_out++;
        if (n_strike_out == k) {
          cout << j;
          return 0;
        }
      }
    }
  }
  return 0;
}