#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  int number_of_split = floor(log2(a)) + floor(log2(b)) + floor(log2(c));
  cout << number_of_split;
  return 0;
}