#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool isMarked[1005];

    for (int i = 0; i < 1005; i++) {
        isMarked[i] = false;
    }

    vector<int> result;

    int n, k;
    cin >> n >> k;

    for (int i = 2; i <= n; i++) {
        if (!isMarked[i]) {
            for (int j = i; j <= n; j+=i) {
                if (!isMarked[j]) {
                    isMarked[j] = true;
                    result.push_back(j);
                }
            }
        }
    }

    cout << result[k-1];

    return 0;
}
