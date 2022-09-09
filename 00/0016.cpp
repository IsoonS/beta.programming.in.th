#include<bits/stdc++.h>
using namespace std;
int main()
{
  int score_Adrian, score_Bruno, score_Goran;
  score_Adrian = score_Bruno = score_Goran = 0;
  string pattern_Adrian, pattern_Bruno, pattern_Goran, answer;
  // least common multiple of 3, 4, 6 are 12 so I decide to use 12 length of pattern.
  pattern_Adrian = "ABCABCABCABC";
  pattern_Bruno = "BABCBABCBABC";
  pattern_Goran = "CCAABBCCAABB";
  int pattern_length = 12;

  int n;
  cin >> n;
  cin >> answer;
  int index; // pattern index
  for (int i = 0; i < n; i++) {
    index = i % pattern_length;
    if (answer[i] == pattern_Adrian[index]) score_Adrian++;
    if (answer[i] == pattern_Bruno[index]) score_Bruno++;
    if (answer[i] == pattern_Goran[index]) score_Goran++;
  }

  int max_score = max(max(score_Adrian, score_Bruno), score_Goran);

  cout << max_score << '\n';
  if (score_Adrian == max_score) {
    cout << "Adrian\n";
  }
  if (score_Bruno == max_score) {
    cout << "Bruno\n";
  }
  if (score_Goran == max_score) {
    cout << "Goran\n";
  }

  return 0;
}

/*
9
AAAABBBBB
*/