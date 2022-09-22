#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int x, y;
  cin >> x >> y;
  if (x > y)
  {
    cout << 2;
  }
  else
  {
    cout << ceil(float(y) / float(x));
  }
}