#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;

    int n;
    cin >> n;

    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    if (v[0] == 0) {
        for (int i = 1; i < n; i++) {
            if (v[i] != 0) {
                int tmpVal = v[i];
                v[i] = v[0];
                v[0] = tmpVal;
                break;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << v[i];
    }

    return 0;
}
