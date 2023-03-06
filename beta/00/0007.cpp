#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin >> r;
    double area1, area2;
    area1 = M_PI * r * r;
    area2 = 2 * r * r;
    cout << fixed << setprecision(6) << area1 << endl;
    cout << fixed << setprecision(6) << area2;
    return 0;
}
