#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];

    sort(arr, arr+3);

    string str;
    cin >> str;

    cout << arr[(int)str[0] - 'A'] << " ";
    cout << arr[(int)str[1] - 'A'] << " ";
    cout << arr[(int)str[2] - 'A'] << " ";

    return 0;
}
