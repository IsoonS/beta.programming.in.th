#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    while (b != 0) {
        int tmp = a;
        a = b;
        b = tmp % b;
    }

    cout << a;

    return 0;
}
