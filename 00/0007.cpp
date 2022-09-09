#include<bits/stdc++.h>
using namespace std;
int main()
{
  // declaration
  int r;
  double general, taxi;
  // input
  cin >> r;
  // process
  general = M_PI * pow(r, 2);
  taxi = 2 * pow(r, 2);
  // output
  cout << fixed << setprecision(6);
  cout << general << '\n' << taxi;
  return 0;
}

/*
1 
3.141593
2.000000

21 
1385.442360
882.000000

42 
5541.769441
3528.000000
*/

// g++ 0007.cpp -o 0007
// ./0007