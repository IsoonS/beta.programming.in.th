#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int half = (n + 1) / 2;

    long long int ans = 1;


        for (int i = n; i > half; i--)
        {
            ans *= i;
        }

        for (int i = 2; i <= n - half; i++)
        {
            ans /= i;
        }


    ans = (n % 2 == 0) ? ans : ans * 2;


    cout << ans;


    return 0;
}
