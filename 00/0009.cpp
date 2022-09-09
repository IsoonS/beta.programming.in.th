#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[5];
  string str;
  // input
  cin >> arr[0] >> arr[1] >> arr[2];
  cin >> str;
  // process
  sort(arr, arr + 3);
  // output
  for (int i = 0; i < str.length(); i++) {
    int index_of_char = int(str[i]) - int('A'); // hilight of this problem
    cout << arr[index_of_char] << ' ';
  }
  return 0;
}
