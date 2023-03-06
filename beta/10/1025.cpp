#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b) {
	if (b == 0) return a;
	return gcd(b, a%b);
}
long long lcm(long long a, long long b) {
	return a * b / gcd(a, b);
}
int main()
{
	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif
	int n;
	cin >> n;
	vector<long long> v;
// 
	int tmp;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		v.push_back(tmp);
	}
	long long lcmTmp = lcm(v[0], v[1]);
	for (int i = 2; i < n; i++) {
		lcmTmp = lcm(lcmTmp, v[i]);
	}
	cout << lcmTmp;
	return 0;
}