#include<bits/stdc++.h>
using namespace std;
int main()
{
  // input
  int a, b, c;
  cin >> a >> b >> c;
  // process
  int diff1, diff2;
  diff1 = b - a;
  diff2 = c - b;
  int result = max(diff1, diff2) - 1;
  // output
  cout << result;
  return 0;
}