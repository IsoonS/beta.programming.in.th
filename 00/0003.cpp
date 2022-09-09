#include<bits/stdc++.h>
using namespace std;
int main() {
  int metrixA[105][105], metrixB[105][105], resultMetrix[105][105];
  int m, n;

  cin >> m >> n;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> metrixA[i][j];
    }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> metrixB[i][j];
      resultMetrix[i][j] = metrixA[i][j] + metrixB[i][j];
    }
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << resultMetrix[i][j] << ' ';
    }
    cout << '\n';
  }

  return 0;
}

/*
3 3
1 2 3
3 2 1
1 3 2
1 1 1
1 1 1
1 1 1
*/

/*
2 3 4
4 3 2
2 4 3
*/