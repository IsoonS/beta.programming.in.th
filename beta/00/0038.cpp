#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    set<string> s;

    string tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        s.insert(tmp);
    }

    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << endl;
    }

    return 0;
}
