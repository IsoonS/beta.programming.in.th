#include<bits/stdc++.h>
using namespace std;
int main()
{
    string adrianAns, brunoAns, goranAns;
    adrianAns = "ABCABCABCABC";
    brunoAns = "BABCBABCBABC";
    goranAns = "CCAABBCCAABB";

    int adrianScore, brunoScore, goranScore;
    adrianScore = brunoScore = goranScore = 0;

    int n;
    cin >> n;

    string ans;
    cin >> ans;

    for (int i = 0; i < n; i++) {
        if (adrianAns[i%12] == ans[i]) adrianScore++;
        if (brunoAns[i%12] == ans[i]) brunoScore++;
        if (goranAns[i%12] == ans[i]) goranScore++;
    }

    int maxScore = max(adrianScore, max(brunoScore, goranScore));

    cout << maxScore << '\n';

    if (adrianScore == maxScore) cout << "Adrian\n";
    if (brunoScore == maxScore) cout << "Bruno\n";
    if (goranScore == maxScore) cout << "Goran\n";


    return 0;
}
