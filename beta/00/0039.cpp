#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int food[10];

    for (int i = 0; i < n; i++) {
        food[i] = i + 1;
    }

    int m;
    cin >> m;

    set<int> s;

    int tmp;
    for (int i = 0; i < m; i++) {
        cin >> tmp;
        s.insert(tmp);
    }

    do {
        // not found
        if (s.find(food[0]) == s.end()) {
            for (int i = 0; i < n; i++) {
                cout << food[i] << " ";
            }
            cout << "\n";
        }

    } while (next_permutation(food, food + n));



    return 0;
}
