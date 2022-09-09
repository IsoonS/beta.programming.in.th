#include <bits/stdc++.h>
using namespace std;
int main()
{
  int positions[3] = {1, 0, 0};
  string typeOfSwap;
  cin >> typeOfSwap;
  for (int i = 0; i < typeOfSwap.length(); i++)
  {
    if (typeOfSwap[i] == 'A')
    {
      swap(positions[0], positions[1]);
    }
    else if (typeOfSwap[i] == 'B')
    {
      swap(positions[1], positions[2]);
    }
    else if (typeOfSwap[i] == 'C')
    {
      swap(positions[0], positions[2]);
    }
  }
  for (int i = 0; i < 3; i++)
  {
    if (positions[i] == 1)
    {
      cout << i + 1;
      break;
    }
  }
  return 0;
}

/*
AB 3
CBABCACCC 1
*/

// learning swap function
// https://stackoverflow.com/questions/66386924/vscode-does-not-show-errors-before-building 
// https://www.youtube.com/watch?v=gFhhsvRwoV8