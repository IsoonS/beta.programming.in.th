#include<iostream>
using namespace std;
int main()
{
  // input
  int a, b, c;
  cin >> a;
  cin >> b;
  cin >> c;
  // process
  int total = a + b + c;
  string ans;
  if (total >= 80) {
    ans = "A";
  } else if (total >= 75) {
    ans = "B+";
  } else if (total >= 70) {
    ans = "B";
  } else if (total >= 65) {
    ans = "C+";
  } else if (total >= 60) {
    ans = "C";
  } else if (total >= 55) {
    ans = "D+";
  } else if (total >= 50) {
    ans = "D";
  } else {
    ans = "F";
  }
  // output
  cout << ans;

  return 0;
}
