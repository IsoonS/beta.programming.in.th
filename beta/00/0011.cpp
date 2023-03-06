#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;

    int tmp;

    for (int i = 0; i < 10; i++) {
        cin >> tmp;
        s.insert(tmp % 42);
    }

    cout << s.size();

    return 0;
}
