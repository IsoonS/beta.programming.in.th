#include<bits/stdc++.h>
using namespace std;
int main()
{
    int hw, mte, fe;
    cin >> hw >> mte >> fe;
    int total = hw + mte + fe;
    string grade;
    if (total >= 80) {
        grade = "A";
    } else if (total >= 75) {
        grade = "B+";
    } else if (total >= 70) {
        grade = "B";
    } else if (total >= 65) {
        grade = "C+";
    } else if (total >= 60) {
        grade = "C";
    } else if (total >= 55) {
        grade = "D+";
    } else if (total >= 50) {
        grade = "D";
    } else {
        grade ="F";
    }

    cout << grade;

    return 0;
}
