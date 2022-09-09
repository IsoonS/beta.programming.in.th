#include<iostream>
#include<algorithm>
#define n 5
using namespace std;
struct competitant {
  int number;
  int total_score;
};
bool cmp(competitant c1, competitant c2) {
  return c1.total_score > c2.total_score;
}
int main()
{
  competitant competitants[n];
  int input;
  for (int i = 0; i < n; i++) {
    competitants[i].number = i + 1;
    competitants[i].total_score = 0;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> input;
      competitants[i].total_score += input;
    }
  }

  sort(competitants, competitants + n, cmp);

  cout << competitants[0].number << " " << competitants[0].total_score;
}