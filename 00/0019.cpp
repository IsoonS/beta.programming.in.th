#include <bits/stdc++.h>
using namespace std;
struct flavor
{
  int sour;
  int bitter;
};
int n;
flavor arr[12];
int exhausted_search(int index, int sour, int bitter)
{
  // debug zone
  // cout << sour << " " << bitter << " " << index << '\n';
  // out of index
  if (index == n)
  {
    // force select
    if (sour == 1 or bitter == 0)
    {
      sour *= arr[n - 1].sour;
      bitter += arr[n - 1].bitter;
    }
    return abs(sour - bitter);
  }
  int diff_select, diff_no_select;
  diff_select = exhausted_search(index + 1, sour * arr[index].sour, bitter + arr[index].bitter);
  diff_no_select = exhausted_search(index + 1, sour, bitter);
  return min(diff_select, diff_no_select);
}
int main()
{
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i].sour >> arr[i].bitter;
  }
  // cout << "Let get start!!\n";
  int diff_min = exhausted_search(0, 1, 0);
  cout << diff_min;
  return 0;
}