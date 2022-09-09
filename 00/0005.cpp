#include<bits/stdc++.h>
using namespace std;
int main()
{
  // declaration
  double a, b, c;
  // input
  cin >> a >> b;
  // process
  c = pow(a, 2) + pow(b, 2);
  c = sqrt(c);
  // output
  cout << fixed << setprecision(6) << c;
  return 0;
}