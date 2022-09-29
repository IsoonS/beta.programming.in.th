#include<iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int arr[10005] = {0};
  int max = -1;
  for (int i = 1; i <= n; i++)
  {
    int loobLike;
    cin >> loobLike;
    arr[loobLike] ++;
    // update max (mem for answer)
    if (arr[loobLike] > max) {
      max = arr[loobLike];
    }
    
  }
  for (int i = 0; i < 10005; i++) {
    if (arr[i] == max) {
      cout << i << " ";
    }
   }
  return 0;
}