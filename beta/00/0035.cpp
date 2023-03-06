#include<bits/stdc++.h>
using namespace std;
double maxArea = 0;

void findArea(vector<pair<int, int>> &v, int i, int index, vector<pair<int, int>> &select, int n) {
    if (index == 3) {
        int x1, y1, x2, y2, x3, y3;
        x1 = select[0].first, y1 = select[0].second;
        x2 = select[1].first, y2 = select[1].second;
        x3 = select[2].first, y3 = select[2].second;
        double newArea = abs(x1 * y2  + x2 * y3 + x3 * y1 - y1 * x2 - y2 * x3 - y3 * x1) / (double)2;
        // cout << "newArea = " << newArea << endl;
        maxArea = max(maxArea, newArea);
        return;
    }
    if (i >= n) return;

    // include
    select[index] = v[i];
    findArea(v, i + 1, index + 1, select, n);

    // exclude
    findArea(v, i + 1, index, select, n);
}

int main()
{
    int n;
    vector<pair<int, int>> v;
    vector<pair<int ,int>> select;
    select.resize(5);

    cin >> n;

    int tmp1, tmp2;
    for (int i = 0; i < n; i++) {
        cin >> tmp1 >> tmp2;
        v.push_back({tmp1, tmp2});
    }

    findArea(v, 0, 0, select, n);

    cout << fixed << setprecision(3) << maxArea;


    return 0;
}
