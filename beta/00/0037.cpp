#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sumUtil = 0;
    int n, m;
    int l, k;
    int c;

    cin >> n >> m;
    cin >> l >> k;
    cin >> c;

    int tmp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> tmp;
            sumUtil += tmp;
        }
    }

    int cost = sumUtil + l * k * c;
    int ans = (cost % c == 0) ? (cost / c) : (cost / c + 1);

    cout << ans;

    return 0;
}
