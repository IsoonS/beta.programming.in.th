#include<bits/stdc++.h>
using namespace std;
int main()
{
	// #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 
	
	vector<string> v;

	int l, n;
	cin >> l;
	cin >> n;

	string tmp;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		v.push_back(tmp);
	}

	// default is last index if no cut -> ans is in last index of vector
	string ans = v[n-1];

	for (int i = 0; i < n - 1; i++) {
		
		int numDiff = 0;
		
		for (int j = 0; j < l; j++) {
			if(v[i][j] != v[i+1][j]) {
				numDiff++;
			}
		}
		if (numDiff > 2) {
			ans = v[i];
			break;
		}
	}

	cout << ans;

	return 0;
}