#include<iostream>
using namespace std;
string days[7] = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};
int day_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int sum_day_in_month(int month) {
  int sum = 0;
  // from month 1 to month n - 1
  for (int i = 0; i < month; i++) {
    sum += day_in_month[i];
  }
  return sum;
}
int main()
{
  int day, month; 
  cin >> day >> month;
  // calculate from months
  int sum_of_days = sum_day_in_month(month - 1);
  sum_of_days += day;
  // count from 1-1 to some day. (exclusive 1-1)
  int day_remainder = (sum_of_days - 1) % 7;
  cout << days[day_remainder];
  return 0;
}