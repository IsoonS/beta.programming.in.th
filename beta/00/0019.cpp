#include <bits/stdc++.h>
using namespace std;

int minDiff_pk = INT_MAX;

void calculate(vector<pair<int, int>> &v, int p, int k, int i, int n, bool right)
{
    if (i == n)
    {
        // if right that is select at least 1
        if (right == true)
        {
            int newDiff = abs(p-k);
            minDiff_pk = min(minDiff_pk, newDiff);
            // cout << " minDiff_pk = " << minDiff_pk << endl;
        }

        return;
    }
    // exclude
    calculate(v, p, k, i+1, n, right);

    // include
    right = true;

    p *= v[i].first;
    k += v[i].second;

    calculate(v, p, k, i+1, n, right);


}

int main()
{
    int n;
    vector<pair<int, int>> v;

    cin >> n;

    int tmp1, tmp2;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp1 >> tmp2;
        v.push_back({tmp1, tmp2});
    }

    bool right = false;

    calculate(v, 1, 0, 0, n, right);

    cout << minDiff_pk;

    return 0;
}
