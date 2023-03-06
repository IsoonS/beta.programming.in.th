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

	bool flag;

	int tmp;
	for (int i = 0; i < n; i++) {
		cin >> tmp;

		flag = false;
		for (int j = 2; j <= sqrt(tmp); j++) {
			// Check double variable if it contains an integer, and not floating point
			// https://stackoverflow.com/questions/1521607/check-double-variable-if-it-contains-an-integer-and-not-floating-point
			double raise = log(tmp)/log(j);

			if (abs(raise - (round(raise))) < 0.000000001) {
				cout << round(raise) << endl;
				flag = true;
				break;
			}
		}

		if (flag == false) {
			cout << "NO" << endl;
		}
	}

    return 0;
}