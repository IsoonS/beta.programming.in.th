#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
  bool forbidden[10] = {false};
  int food[10];
  int n, m;
  cin >> n;
  cin >> m;
  for (int i = 0; i < m; i++)
  {
    int tmp_fb;
    cin >> tmp_fb;
    forbidden[tmp_fb] = true;
  }

  for (int i = 1; i <= n; i++)
  {
    food[i] = i;
  }

  do
  {
    int check_forbid = food[1];
    // if be forbidden -> continue else do...
    if (forbidden[check_forbid] == true)
      continue;
    for (int i = 1; i <= n; i++)
    {
      cout << food[i] << " ";
    }
    cout << '\n';
  } while (next_permutation(food + 1, food + n + 1));
  return 0;
}