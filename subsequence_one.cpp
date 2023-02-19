#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Practice
{
public:
  void second_helper(string s, string ans, int index, vector<string> &ansVec)
  {
    if (s.size() == index)
    {
      ansVec.push_back(ans);
      return;
    }
    second_helper(s, ans + s[index], index + 1, ansVec);
    second_helper(s, ans, index + 1, ansVec);
    return;
  }

  vector<string> sequence(string s)
  {
    vector<string> ansVec;
    second_helper(s, "", 0, ansVec);
    return ansVec;
  }
};

int main()
{
  string s;
  cout << "Enter the value -> ";
  cin >> s;
  Practice p;
  auto ans = p.sequence(s);
  cout << "The subsequences are: ";
  for (const auto &sub : ans)
  {
    cout << sub << " ";
  }
  cout << endl;
  return 0;
}