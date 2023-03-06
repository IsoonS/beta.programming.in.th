#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> v;

    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }

    int minV = INT_MAX;
    int maxV = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (v[i] < minV)
            minV = v[i];
        if (v[i] > maxV)
            maxV = v[i];
    }

    cout << minV << endl;
    cout << maxV << endl;


    return 0;
}
