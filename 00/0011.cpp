#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[10];
  // set all of array to be false
  bool remainder[42] = {false};
  int r, num_of_r = 0;
  for (int i = 0; i < 10; i++) {
    cin >> arr[i];
    r = arr[i] % 42;
    remainder[r] = true;
  }
  for (int i = 0; i < 42; i++) {
    if (remainder[i] == true) num_of_r++;
  }
  cout << num_of_r;
  
  return 0;
}

/*
1
2
3
4
5
6
7
8
9
10
*/