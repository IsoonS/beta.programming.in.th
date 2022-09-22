#include <iostream>
#include <algorithm>
using namespace std;
string add(string &a, string &b)
{
  string ans = "";
  int n = min(a.length(), b.length());
  int i;
  for (i = 0; i < n; i++)
  {
    if (a[i] == '1' and b[i] == '1')
    {
      ans += '2';
    }
    else if (a[i] != b[i])
    {
      // 0, 1 or 1, 0
      ans += '1';
    }
    else
    {
      ans += '0';
    }
  }
  n = max(a.length(), b.length());
  string remainder = (a.length() > b.length()) ? a : b;
  for (; i < remainder.length(); i++)
  {
    ans += remainder[i];
  }
  reverse(ans.begin(), ans.end());
  return ans;
}

string multiply(string &a, string &b) {
  string ans = "1";
  int n = a.length() + b.length() - 2;
  for (int i = 0; i < n; i++) {
    ans += '0';
  }
  return ans;
}
int main()
{
  string a, b;
  string op;
  string ans;
  cin >> a;
  cin >> op;
  cin >> b;
  if (op == "+")
  {
    // reverse number and add
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    cout << add(a, b);
  } else if (op == "*") {
    // cosider only 0
    cout << multiply(a, b);
  }
}