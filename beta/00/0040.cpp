#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        if (int(str[str.length()-1]-'0') % 2 == 1 or str == "2")
        {
            cout << "T\n";
        }
        else
        {
            cout << "F\n";
        }
    }

    return 0;
}
