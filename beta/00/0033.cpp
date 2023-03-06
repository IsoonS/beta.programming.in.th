#include<bits/stdc++.h>
using namespace std;
int main()
{
    int like[10005];
    for (int i = 0; i < 10001; i++) {
        like[i] = 0;
    }

    int maxLike = 0;

    int n;

    cin >> n;

    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        like[tmp]++;

        if (like[tmp] > maxLike) {
            maxLike = like[tmp];
        }
    }

    for (int i = 1; i <= 10000; i++) {
        if (like[i] == maxLike) {
            cout << i << " ";
        }
    }

    return 0;
}
