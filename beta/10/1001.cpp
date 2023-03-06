#include<bits/stdc++.h>
using namespace std;
int main()
{
	// #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 

    char table[25][25];

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j  = 0; j < m; j++) {
			cin >> table[i][j];
		}
	}

	int nBrick[25];
	for (int i = 0; i < m; i++) {
		cin >> nBrick[i];
	}

	int i, j;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			if (table[j][i] == 'O') {
				break;
			}
		}

		j--;

		while (j >= 0 and nBrick[i] > 0) {
			table[j][i] = '#';
			j--, nBrick[i]--;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j  = 0; j < m; j++) {
			cout << table[i][j];
		}
		cout << "\n";
	}

	return 0;
}