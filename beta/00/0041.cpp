#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << fixed << setprecision(6) << (float) n;
    }
    else
    {
        float ans = 0;
        if (n == 1) {
            ans = 2;
        } else if (n == 3) {
            ans = 2 + sqrt(3);
        } else {
            ans = (n - 3) + 2 * sqrt(3);
        }
        cout << fixed << setprecision(6) << ans;
    }



    return 0;
}
