#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector< char > ans;
  int n;
  string str;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> str;
    int last_digit = (int)str[str.length() - 1] - (int)'0';
    if (last_digit % 2 == 1) {
      ans.push_back('T');
    } else if (str.length() == 1 and str[0] == '2'){
      ans.push_back('T');
    } else {
      ans.push_back('F');
    }
  }

  for (int i = 0; i < n; i++) {
    cout << ans[i] << "\n";
  }
  return 0;
}