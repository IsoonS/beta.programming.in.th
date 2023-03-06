#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;

    int count_small = 0;
    int count_capital = 0;

    for (int i = 0; i < str.length(); i++) {
        if (islower(str[i])) count_small++;
        else if (isupper(str[i])) count_capital++;
    }

    string ans;
    if (count_small == 0) {
        ans = "All Capital Letter";
    } else if (count_capital == 0) {
        ans = "All Small Letter";
    } else {
        ans = "Mix";
    }

    cout << ans;

    return 0;
}
