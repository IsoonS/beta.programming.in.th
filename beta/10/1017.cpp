#include<bits/stdc++.h>
using namespace std;
int main()
{
	// #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int n;
    cin >> n;

    int table[12][12];
    set<int> sum;

    sum.insert((n*n*n+n)/2);

    int tmpSum;
    for (int i = 0; i < n; i++) {
    	for (int j = 0; j < n; j++) {
    		cin >> table[i][j];
    	}
    }

    for (int i = 0; i < n; i++) {
    	tmpSum = 0;
    	for (int j = 0; j < n; j++) {
    		tmpSum += table[i][j];
    	}
    	sum.insert(tmpSum);
    }

    for (int i = 0; i < n; i++) {
    	tmpSum = 0;
    	for (int j = 0; j < n; j++) {
    		tmpSum += table[j][i];
    	}
    	sum.insert(tmpSum);
    }

    int tmpSum1 = 0;
    int tmpSum2 = 0;
    for (int i = 0; i < n; i++) {
    	tmpSum1 += table[i][i];
    	tmpSum2 += table[i][n - 1 - i];
    }	
    sum.insert(tmpSum1);
    sum.insert(tmpSum2);

    if (sum.size() != 1) {
    	cout << "No";
    } else {
    	cout << "Yes";
    }

    return 0;
}