// https://www.geeksforgeeks.org/structure-sorting-in-c/

#include<bits/stdc++.h>

#define NUMBER_OF_TEAM 4

using namespace std;

struct TEAM
{
    string teamName;
    int score;
    int goal;
    int concede;
    int diff;
};

bool cmp(TEAM a, TEAM b) {
    if (a.score != b.score) {
        return a.score > b.score;
    }

    if (a.diff != b.diff) {
        return a.diff > b.diff;
    }

    return a.goal > b.goal;

}

int main()
{
    int result[NUMBER_OF_TEAM][NUMBER_OF_TEAM];

    vector<TEAM> table;

    string strTmp;
    for (int i = 0; i < NUMBER_OF_TEAM; i++)
    {
        cin >> strTmp;

        TEAM tmp = {strTmp, 0, 0, 0};

        table.push_back(tmp);
    }

    for (int i = 0 ; i < NUMBER_OF_TEAM; i++)
    {
        for (int j = 0; j < NUMBER_OF_TEAM; j++)
        {
            cin >> result[i][j];
        }
    }

    // calculate score
    for (int i = 0 ; i < NUMBER_OF_TEAM; i++)
    {
        for (int j = i + 1; j < NUMBER_OF_TEAM; j++)
        {
            table[i].goal += result[i][j];
            table[i].concede += result[j][i];
            table[i].diff = table[i].goal - table[i].concede; // update diff

            table[j].goal += result[j][i];
            table[j].concede += result[i][j];
            table[j].diff = table[j].goal - table[j].concede; // update diff

            if (result[i][j] > result[j][i])
            {
                table[i].score += 3;
            } else if (result[i][j] < result[j][i]) {
                table[j].score += 3;
            } else {
                table[i].score += 1;
                table[j].score += 1;
            }
        }
    }



    sort(table.begin(), table.end(), cmp);

//    for (int i = 0; i < NUMBER_OF_TEAM; i++) {
//        cout << table[i].teamName << " " << table[i].score << endl;
//    }

    for (int i = 0; i < NUMBER_OF_TEAM; i++) {
        cout << table[i].teamName << " " << table[i].score << endl;
    }

    return 0;
}
