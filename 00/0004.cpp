#include<bits/stdc++.h>
using namespace std;
int main()
{
  // declaration
  string input, ans = "";
  int num_upper = 0, num_lower = 0;
  // input
  cin >> input;
  // process
  for (int i = 0; i < input.length(); i++) {
    if (isupper(input[i])) {
      num_upper += 1;
    } else if (islower(input[i])) {
      num_lower += 1;
    }
  }

  if (num_upper == input.length()) {
    ans = "All Capital Letter";
  } else if (num_lower == input.length()) {
    ans = "All Small Letter";
  } else {
    ans = "Mix";
  }
  // output
  cout << ans;

  return 0;
}

/*
ABCDEFG All Capital Letter
abcdefg All Small Letter
AbCdEfG Mix
*/