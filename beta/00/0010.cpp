#include<bits/stdc++.h>
using namespace std;
int main()
{
    int curPos = 1;

    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'A') {
            if (curPos == 1) {
                curPos = 2;
            } else if (curPos == 2) {
                curPos = 1;
            }
        } else if (str[i] == 'B') {
            if (curPos == 2) {
                curPos = 3;
            } else if (curPos == 3) {
                curPos = 2;
            }
        } else if (str[i] == 'C') {
            if (curPos == 1) {
                curPos = 3;
            } else if (curPos == 3) {
                curPos = 1;
            }
        }
    }

    cout << curPos;

    return 0;
}
