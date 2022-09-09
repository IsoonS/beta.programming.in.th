#include <iostream>
#include <set>
using namespace std;
int main()
{
  string str, ans_str = "";
  set<char> vowel = {'a', 'e', 'i', 'o', 'u'};
  // cin >> str;
  getline(cin, str);
  int i = 0;
  while (i < str.length())
  {
    // if found a e i o u and pattern
    if (str[i + 1] == 'p' and str[i] == str[i + 2] and vowel.find(str[i]) != vowel.end())
    {
      ans_str += str[i];
      i += 3;
    }
    else
    {
      ans_str += str[i];
      i += 1;
    }
  }
  cout << ans_str;
  return 0;
}

// thing that I have learned
// how to cin string with space
// https://stackoverflow.com/questions/5838711/stdcin-input-with-spaces

/*
bapas jepe doposapadnapa opovapa kepemipijapa
*/