#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int numOfCuts;
    numOfCuts = (int)log2(a) + (int)log2(b) + (int)log2(c);

    cout << numOfCuts;

    return 0;
}
