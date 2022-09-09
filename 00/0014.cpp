#include<bits/stdc++.h>
using namespace std;

// great common divisor
int gcd(int x, int y) {
  // remainder
  /*
    12 14
    12 = 14(0) + 12
    14 = 12(1) + 2
    12 = 2(6) + 0
    2 = 0 .... end loop
  */
  int r;
  while (y != 0) {
    r = x % y;
    x = y;
    y = r;
  }
  return x;
}

int main()
{
  int a, b;
  cin >> a >> b;
  int result_gcd = gcd(a, b);
  cout << result_gcd;
  return 0;
}