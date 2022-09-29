#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector< pair<int, int> > v;
  for (int i = 0; i < n; i++) {
    int tmp_x, tmp_y;
    cin >> tmp_x >> tmp_y;
    v.push_back(make_pair(tmp_x, tmp_y));
  }
  // search all combination
  // exhaustion search
  // to find max
  int x1, y1;
  int x2, y2;
  int x3, y3;
  float max = -1;
  float area;
  for (int i = 0; i < n - 2; i++) {
    x1 = v[i].first, y1 = v[i].second;
    for (int j = i + 1; j < n - 1; j++) {
      x2 = v[j].first, y2 = v[j].second;
      for (int k = i + 2; k < n; k++) {
        x3 = v[k].first, y3 = v[k].second;
        area = abs(x1 * y2 + x2 * y3 + x3 * y1 - (y1 * x2 + y2 * x3 + y3 * x1));
        area /= 2;
        max = (max > area) ? max : area;
      }
    }
  }

  cout << fixed << setprecision(3) << max;
  return 0;
}