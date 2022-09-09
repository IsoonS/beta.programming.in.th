#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int half = (n % 2 == 0) ? n / 2 : (n + 1) / 2;
  int width = (n % 2 == 0) ? n - 1 : n;
  int n1, n2;
  n1 = n2 = width / 2;
  // cout << half;
  for (int i = 0; i < half; i++)
  {
    for (int j = 0; j < width; j++)
    {
      if (i == 0 and j == width / 2)
        cout << "*";
      else if (i != 0 and (j == n1 or j == n2))
        cout << "*";
      else
        cout << "-";
    }
    n1--, n2++;
    cout << '\n';
  }
  // out of index so that I move pointer to pattern
  if (n % 2 == 0)
  {
    n1++, n2--;
  } else {
    n1 = n1 + 2, n2 = n2 - 2;
  }

  for (int i = half; i < n; i++)
  {
    for (int j = 0; j < width; j++)
    {
      if (i == n - 1 and j == width / 2)
        cout << "*";
      else if (i != n - 1 and (j == n1 or j == n2))
        cout << "*";
      else
        cout << "-";
    }
    n1++, n2--;
    cout << '\n';
  }
}