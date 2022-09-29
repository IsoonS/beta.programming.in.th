#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
  int n;
  vector<int> v;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    v.push_back(tmp);
  }
  sort(v.begin(), v.end());
  int i = 0;
  // find v[i] != 0 from starting point
  while (v[i] == 0) {
    i++;
  }
  // swap the first non zero integer with 0
  swap(v[0], v[i]);
  // output
  for (int i = 0; i < n; i++) {
    cout << v[i];
  }
  return 0;
}
