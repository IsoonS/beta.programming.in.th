#include <iostream>
using namespace std;
int mod(string str, int n) {
  int ans = 0;
  for (int i = 0; i < str.length(); i++) {
    int digitNum = int(str[i]) - int('0');
    ans = (ans * 10 + digitNum) % n; 
  }
  return ans;
}
int main()
{
  string x;
  cin >> x;
  cout << mod(x, 3) << " " << mod(x, 11);
}