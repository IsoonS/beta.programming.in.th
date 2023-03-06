#include<bits/stdc++.h>
using namespace std;
int main()
{
    int maxSum = 0, sum = 0;
    int indexMax;

    int tmp;
    for (int i = 0; i < 5; i++) {

        sum = 0;
        for (int j = 0; j < 4; j++) {
            cin >> tmp;
            sum += tmp;
        }
        if (maxSum < sum) {
            indexMax = i + 1;
            maxSum = sum;
        }
    }

    cout << indexMax << " " << maxSum;

    return 0;
}
