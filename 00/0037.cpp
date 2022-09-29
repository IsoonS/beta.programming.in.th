#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int cost = 0;
  int n, m;
  cin >> n >> m;
  int l, k;
  cin >> l >> k;
  int c;
  cin >> c;
  // calculate electricity cost
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      int tmp;
      cin >> tmp;
      cost += tmp;
    }
  }
  // jet cost
  cost += c * l * k;

  int cost_per_person = ceil( (float)cost / (float)c);

  cout << cost_per_person;
  return 0;
}