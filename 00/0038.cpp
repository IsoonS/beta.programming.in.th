#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  set<string> s;
  vector<string> v;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    string tmp_str;
    cin >> tmp_str;
    // new string
    // cannot find in set
    if (s.find(tmp_str) == s.end()) {
      v.push_back(tmp_str);
      s.insert(tmp_str);
    }
    
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << '\n';
  }
  return 0;
}