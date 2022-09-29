#include<iostream>
using namespace std;

int nCr(int n, int r)
{

  // nCr = n! / ((n - r)! * r!) -> n ถอย r หารด้วย (n-r)!
  long long tmp1 = 1;
  for (int i = n; i > r; i--) {
    tmp1 *= i;
  }
  int tmp2 = 1;
  for (int i = 1; i <= n - r; i++) {
    tmp2 *= i;
  }
  return tmp1 / tmp2;
}
int main()
{
  int n;
  cin >> n;
  int num_g1, num_g2;
  if (n % 2 == 0) {
    num_g1 = num_g2 = n / 2;
  } else {
    num_g1 = n / 2 + 1;
    num_g2 = n / 2;
  }

  int ans = nCr(n, num_g1);
  if (n % 2 == 1) {
    ans *= 2;
  }
  cout << ans;
  return 0;
}