#include<bits/stdc++.h>
using namespace std;
int main()
{
  // declaration
  int n;
  int arrayOfData[1005];
  // input
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arrayOfData[i];
  }
  // process
  int max = INT_MIN, min = INT_MAX;
  // int max = arrayOfData[0], min = arrayOfData[0]; (optional)
  for (int i = 0; i < n; i++) {
    if (arrayOfData[i] < min) min = arrayOfData[i];
    if (arrayOfData[i] > max) max = arrayOfData[i];
  }
  // output
  cout << min << '\n' << max;

  return 0;
}